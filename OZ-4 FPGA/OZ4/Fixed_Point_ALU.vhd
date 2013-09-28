library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;  

library UNISIM;
use UNISIM.VComponents.all;

use work.fixed_pkg.all;

entity Fixed_Point_ALU is
	port( A : in std_logic_vector(31 downto 0);
		  B : in std_logic_vector(31 downto 0);
		  result : out std_logic_vector(31 downto 0);
		  sel : in std_logic);
end Fixed_Point_ALU;

architecture behavioral of Fixed_Point_ALU is 

signal A_fixed : sfixed(2 downto -29);
signal B_fixed : sfixed(2 downto -29);		
signal result_fixed : sfixed(2 downto -29);

begin
	
	A_fixed <= to_sfixed(A, 2, -29);
	B_fixed <= to_sfixed(B, 2, -29); 
	result <= to_slv(result_fixed);
	
	process (A_fixed, B_fixed, sel)
	begin
		if sel = '0' then --multiply
			result_fixed <= resize(A_fixed * B_fixed, result_fixed'high, result_fixed'low);
		else --divide
			result_fixed <= resize(A_fixed / B_fixed, result_fixed'high, result_fixed'low);	
		end if;							
	end process;
	
end behavioral;

		 