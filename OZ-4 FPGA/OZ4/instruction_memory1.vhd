library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;  

library UNISIM;
use UNISIM.VComponents.all;

entity instruction_memory is
	port(address : in std_logic_vector(31 downto 0);
		  data_out : out std_logic_vector(11 downto 0);
		  immediate_addr : in std_logic_vector(5 downto 0);
		  immediate_out : out std_logic_vector(31 downto 0));
end instruction_memory;

architecture Behavioral of instruction_memory is

type instruction_data_type is array (4095 downto 0) of std_logic_vector(11 downto 0); --4 kB of data memory
signal instruction_data : instruction_data_type;

type immediate_data_type is array (63 downto 0) of std_logic_vector(31 downto 0);
signal immediate_data : immediate_data_type;

signal address_short : std_logic_vector(11 downto 0);

begin

	address_short <= address(11 downto 0);

	data_out <= instruction_data(conv_integer(unsigned(address_short)));
	immediate_out <= immediate_data(conv_integer(unsigned(immediate_addr)));

	--Assigning the immediate memory
	immediate_data(0) <= x"00000001";
	immediate_data(1) <= x"00000003";
	immediate_data(2) <= x"40000000";
	immediate_data(3) <= x"10000000";
	immediate_data(4) <= x"0000007D";

	--Assigning the instruction memory
	instruction_data(0)  <= "000000000000"; --Address zero is zero
	instruction_data(1)  <= "010100000000"; --PUSH immediate at addr 0 (1)
	instruction_data(2)  <= "010101000000"; --DUP
	instruction_data(3)  <= "000001000000"; --ADD
	instruction_data(4)  <= "010100000000"; --PUSH immediate at addr 0 (1)
	instruction_data(5)  <= "010100000000"; --PUSH immediate at addr 0 (1)
	instruction_data(6)  <= "010100000000"; --PUSH immediate at addr 0 (1)
	instruction_data(7)  <= "000001000000"; --ADD
	instruction_data(8)  <= "000001000000"; --ADD
	instruction_data(9)  <= "000001000000"; --ADD
	instruction_data(10) <= "010100000001"; --PUSH immediate at addr 1 (3)
	instruction_data(11) <= "110001000000"; --WR_MEM
	instruction_data(12) <= "010100000010"; --PUSH immediate at addr 2 (2.0)
	instruction_data(13) <= "010100000011"; --PUSH immediate at addr 3 (0.5)
	instruction_data(14) <= "001011000000"; --FPMUL
	instruction_data(15) <= "010100000001"; --PUSH immediate at addr 1 (3)
	instruction_data(16) <= "110000000000"; --RD_MEM
	instruction_data(17) <= "010000000000"; --DROP
	instruction_data(18) <= "010000000000"; --DROP
	instruction_data(19) <= "110010000000"; --RD_PRT
	instruction_data(20) <= "110011000000"; --WR_PRT
	instruction_data(21) <= "010100000001"; --PUSH immediate at addr 1 (3)
	instruction_data(22) <= "110100000000"; --RD_PIN
	instruction_data(23) <= "010100000000"; --PUSH immediate at addr 0 (1)
	instruction_data(24) <= "110101000000"; --WR_PIN
	
	instruction_data(25) <= "010100000000"; --PUSH immediate at addr 0 (1)
	instruction_data(26) <= "010100000100"; --PUSH immediate at addr 4 (125) --addr for jp
	instruction_data(27) <= "100011000000"; --PSHPC
	instruction_data(28) <= "100000000000"; --JP to 125
	instruction_data(29) <= "010100000001"; --PUSH immediate at addr 1 (3)
	instruction_data(30) <= "000110000000"; --CP
	instruction_data(31) <= "010100000001"; --PUSH immediate at addr 1 (3)
	instruction_data(32) <= "010100000100"; --PUSH immediate at addr 4 (125)
	instruction_data(33) <= "100001000000"; --BRN (if e0 is greater than e1)
	
	instruction_data(125) <= "010100000000"; --PUSH immediate at addr 0 (1)
	instruction_data(126) <= "000001000000"; --ADD
	instruction_data(127) <= "100010000000"; --RET
	

end Behavioral;

