library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;  

library UNISIM;
use UNISIM.VComponents.all;

entity other_sim is
	port(hi : in std_logic);
end other_sim;

architecture behavioral of other_sim is 

component data_stack
port(
	clk : in STD_LOGIC;
	rst : in STD_LOGIC;
	e0_sel : in STD_LOGIC_VECTOR(1 downto 0);
	e1_sel : in STD_LOGIC_VECTOR(1 downto 0);
	e2_sel : in STD_LOGIC_VECTOR(1 downto 0);
	e0_en : in STD_LOGIC;
	e1_en : in STD_LOGIC;
	e2_en : in STD_LOGIC;
	push : in STD_LOGIC;
	pop : in STD_LOGIC;
	pop2 : in STD_LOGIC;
	data_in : in STD_LOGIC_VECTOR(31 downto 0);
	e0_out : out STD_LOGIC_VECTOR(31 downto 0);
	e1_out : out STD_LOGIC_VECTOR(31 downto 0));
end component;

signal clk, rst, e0_en, e1_en, e2_en, push, pop, pop2 : std_logic;
signal e0_sel, e1_sel, e2_sel : std_logic_vector(1 downto 0);
signal data_in, next_data_in, e0_out, e1_out : std_logic_vector(31 downto 0);

type ops_type is (reset, drop, swap, rot, nrot, push_op, dup, rd, nrd, rds, nrds, over, wr_mem);				  
signal op, next_op:  ops_type;

begin
	
	uut : data_stack
	port map(
		clk => clk,
		rst => rst,
		e0_sel => e0_sel,
		e1_sel => e1_sel,
		e2_sel => e2_sel,
		e0_en => e0_en,
		e1_en => e1_en,
		e2_en => e2_en,
		push => push,
		pop => pop,
		pop2 => pop2,
		data_in => data_in,
		e0_out => e0_out,
		e1_out => e1_out
	);
	
	ctl : process (clk, rst) is
	begin
		if rst = '1' then
			op <= reset;
			data_in <= (others => '0');
		elsif rising_edge(clk) then
			op <= next_op;
			data_in <= next_data_in;
		end if;
	end process;
	
	ops : process is
	begin
			next_op <= reset;
			next_data_in <= (others => '0');
		wait for 100 ns;
			next_op <= push_op;
			next_data_in <= x"44444444";
		wait for 20 ns;
			next_op <= push_op;
			next_data_in <= x"33333333";
		wait for 20 ns;
			next_op <= push_op;
			next_data_in <= x"22222222";
		wait for 20 ns;
			next_op <= push_op;
			next_data_in <= x"11111111";
		wait for 20 ns;
			next_op <= push_op;
			next_data_in <= x"11111111";
		wait for 20 ns;
			next_op <= drop;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= swap;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= swap;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= over;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= drop;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= dup;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= drop;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= rot;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= nrot;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= rot;
			next_data_in <= (others => '0'); 
		wait for 20 ns;
			next_op <= drop;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= push_op;
			next_data_in <= x"11111111";
		wait for 20 ns;
			next_op <= rd;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= drop;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= drop;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= drop;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= push_op;
			next_data_in <= x"44444444";
		wait for 20 ns;
			next_op <= push_op;
			next_data_in <= x"33333333";
		wait for 20 ns;
			next_op <= push_op;
			next_data_in <= x"22222222";
		wait for 20 ns;
			next_op <= push_op;
			next_data_in <= x"11111111";
		wait for 20 ns;
			next_op <= nrd;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= push_op;
			next_data_in <= x"33333333";
		wait for 20 ns;
			next_op <= rot;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= rds;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= push_op;
			next_data_in <= x"22222222";
		wait for 20 ns;
			next_op <= swap;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= nrds;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= push_op;
			next_data_in <= x"88888888";
		wait for 20 ns;
			next_op <= push_op;
			next_data_in <= x"BBBBBBBB";
		wait for 20 ns;
			next_op <= wr_mem;
			next_data_in <= (others => '0');
		wait for 20 ns;
			next_op <= reset;
			next_data_in <= (others => '0');
		wait;
	end process;
	
	ctl_async : process (op) is
	begin
		case op is
			when reset =>
				e0_sel <= "00";
				e1_sel <= "00";
				e2_sel <= "00";	
				
				e0_en <= '0';
				e1_en <= '0';
				e2_en <= '0';
				
				push <= '0';
				pop <= '0';
				pop2 <= '0'; 
			
			when drop =>
				e0_sel <= "01";
				e1_sel <= "01";
				e2_sel <= "01";	
				
				e0_en <= '1';
				e1_en <= '1';
				e2_en <= '1';
				
				push <= '0';
				pop <= '1';
				pop2 <= '0';
			
			when swap =>
				e0_sel <= "01";
				e1_sel <= "00";
				e2_sel <= "00";	
				
				e0_en <= '1';
				e1_en <= '1';
				e2_en <= '0';
				
				push <= '0';
				pop <= '0';
				pop2 <= '0';
				
			when nrot =>
				e0_sel <= "01";
				e1_sel <= "01";
				e2_sel <= "10";	
				
				e0_en <= '1';
				e1_en <= '1';
				e2_en <= '1';
				
				push <= '0';
				pop <= '0';
				pop2 <= '0';
				
			when rot =>
				e0_sel <= "10";
				e1_sel <= "00";
				e2_sel <= "00";	
				
				e0_en <= '1';
				e1_en <= '1';
				e2_en <= '1';
				
				push <= '0';
				pop <= '0';
				pop2 <= '0';  
				
			when push_op =>
				e0_sel <= "00";
				e1_sel <= "00";
				e2_sel <= "00";	
				
				e0_en <= '1';
				e1_en <= '1';
				e2_en <= '1';
				
				push <= '1';
				pop <= '0';
				pop2 <= '0';
				
			when dup =>
				e0_sel <= "00";
				e1_sel <= "00";
				e2_sel <= "00";	
				
				e0_en <= '0';
				e1_en <= '1';
				e2_en <= '1';
				
				push <= '1';
				pop <= '0';
				pop2 <= '0'; 
				
			when nrd =>
				e0_sel <= "10";
				e1_sel <= "00";
				e2_sel <= "01";	
				
				e0_en <= '1';
				e1_en <= '1';
				e2_en <= '1';
				
				push <= '0';
				pop <= '1';
				pop2 <= '0'; 
				
			when rd =>
				e0_sel <= "00";
				e1_sel <= "00";
				e2_sel <= "01";	
				
				e0_en <= '0';
				e1_en <= '0';
				e2_en <= '1';
				
				push <= '0';
				pop <= '1';
				pop2 <= '0'; 
				
			when nrds =>
				e0_sel <= "00";
				e1_sel <= "01";
				e2_sel <= "01";	
				
				e0_en <= '0';
				e1_en <= '1';
				e2_en <= '1';
				
				push <= '0';
				pop <= '1';
				pop2 <= '0';
				
			when rds =>
				e0_sel <= "01";
				e1_sel <= "00";
				e2_sel <= "01";	
				
				e0_en <= '1';
				e1_en <= '1';
				e2_en <= '1';
				
				push <= '0';
				pop <= '1';
				pop2 <= '0'; 
				
			when over =>
				e0_sel <= "01";
				e1_sel <= "00";
				e2_sel <= "00";	
				
				e0_en <= '1';
				e1_en <= '1';
				e2_en <= '1';
				
				push <= '1';
				pop <= '0';
				pop2 <= '0';
				
			when wr_mem =>
				e0_sel <= "10";
				e1_sel <= "10";
				e2_sel <= "11";	
				
				e0_en <= '1';
				e1_en <= '1';
				e2_en <= '1';
				
				push <= '0';
				pop <= '0';
				pop2 <= '1';
				
			when others => null;
		end case;
	end process;
										
end behavioral;