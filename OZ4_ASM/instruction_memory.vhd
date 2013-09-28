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

	immediate_data(0) <= x"00000000";
	immediate_data(1) <= x"06666668";
	immediate_data(2) <= x"08ccccd0";
	immediate_data(3) <= x"00000001";
	immediate_data(4) <= x"00000010";
	immediate_data(5) <= x"00000002";
	immediate_data(6) <= x"00000003";
	immediate_data(7) <= x"000000ff";
	immediate_data(8) <= x"40000000";
	immediate_data(9) <= x"00000046";
	instruction_data(1) <= "010100000001";
	instruction_data(2) <= "010100000000";
	instruction_data(3) <= "110001000000";
	instruction_data(4) <= "010100000010";
	instruction_data(5) <= "010100000011";
	instruction_data(6) <= "110001000000";
	instruction_data(7) <= "010100000010";
	instruction_data(8) <= "010101000000";
	instruction_data(9) <= "001011000000";
	instruction_data(10) <= "010100000001";
	instruction_data(11) <= "010101000000";
	instruction_data(12) <= "001011000000";
	instruction_data(13) <= "010100000010";
	instruction_data(14) <= "010100000010";
	instruction_data(15) <= "010100000001";
	instruction_data(16) <= "001011000000";
	instruction_data(17) <= "000111000000";
	instruction_data(18) <= "000001000000";
	instruction_data(19) <= "010010000000";
	instruction_data(20) <= "010100000011";
	instruction_data(21) <= "110000000000";
	instruction_data(22) <= "010010000000";
	instruction_data(23) <= "000010000000";
	instruction_data(24) <= "000001000000";
	instruction_data(25) <= "010001000000";
	instruction_data(26) <= "010101000000";
	instruction_data(27) <= "010101000000";
	instruction_data(28) <= "001011000000";
	instruction_data(29) <= "010101000000";
	instruction_data(30) <= "010100000101";
	instruction_data(31) <= "110001000000";
	instruction_data(32) <= "010010000000";
	instruction_data(33) <= "011010000000";
	instruction_data(34) <= "010101000000";
	instruction_data(35) <= "001011000000";
	instruction_data(36) <= "010101000000";
	instruction_data(37) <= "010100000101";
	instruction_data(38) <= "110000000000";
	instruction_data(39) <= "000001000000";
	instruction_data(40) <= "010100000101";
	instruction_data(41) <= "110001000000";
	instruction_data(42) <= "010010000000";
	instruction_data(43) <= "010001000000";
	instruction_data(44) <= "010100000011";
	instruction_data(45) <= "110000000000";
	instruction_data(46) <= "010010000000";
	instruction_data(47) <= "010100000110";
	instruction_data(48) <= "110000000000";
	instruction_data(49) <= "010100000011";
	instruction_data(50) <= "000001000000";
	instruction_data(51) <= "010100000111";
	instruction_data(52) <= "000110000000";
	instruction_data(53) <= "010000000000";
	instruction_data(54) <= "010100000110";
	instruction_data(55) <= "110001000000";
	instruction_data(56) <= "010100000101";
	instruction_data(57) <= "010100001001";
	instruction_data(58) <= "100001000000";
	instruction_data(59) <= "010100000101";
	instruction_data(60) <= "110000000000";
	instruction_data(61) <= "010100001000";
	instruction_data(62) <= "000110000000";
	instruction_data(63) <= "010000000000";
	instruction_data(64) <= "010000000000";
	instruction_data(65) <= "010100000110";
	instruction_data(66) <= "010100001001";
	instruction_data(67) <= "100001000000";
	instruction_data(68) <= "010100000100";
	instruction_data(69) <= "100000000000";


end Behavioral;