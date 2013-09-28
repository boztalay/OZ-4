library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;  

library UNISIM;
use UNISIM.VComponents.all;

entity sim_top is
	port(clk : in std_logic;
		  rst : in std_logic);
end sim_top;

architecture Behavioral of sim_top is

component OZ4_top is
	port(clk : in std_logic;
		  rst : in std_logic;
		  
		  --Basic IO
		  iport : in std_logic_vector(31 downto 0);
		  ipins : in std_logic_vector(7 downto 0);
		  
		  oport : out std_logic_vector(31 downto 0);
		  opins : out std_logic_vector(7 downto 0);
		  
		  --Instruction Memory
		  instruction_in : in std_logic_vector(11 downto 0);
		  instruction_addr : out std_logic_vector(31 downto 0);
		  immediate_in : in std_logic_vector(31 downto 0);
		  immediate_addr : out std_logic_vector(5 downto 0);
		  
		  --Data Memory
		  mem_addr : out std_logic_vector(31 downto 0);
		  mem_write_data : out std_logic_vector(31 downto 0);
		  mem_read_data : in std_logic_vector(31 downto 0);
		  mem_we_out : out std_logic;
		  mem_clk : out std_logic);
end component;

component data_memory is
	port(clk : in std_logic;
		  rst : in std_logic;
		  
		  address : in std_logic_vector(31 downto 0);
		  data_in : in std_logic_vector(31 downto 0);
		  data_out : out std_logic_vector(31 downto 0);
		  we : in std_logic);		  
end component;

component instruction_memory is
	port(address : in std_logic_vector(31 downto 0);
		  data_out : out std_logic_vector(11 downto 0);
		  immediate_addr : in std_logic_vector(5 downto 0);
		  immediate_out : out std_logic_vector(31 downto 0));
end component;

signal OZ4_iport, OZ4_oport : std_logic_vector(31 downto 0);
signal OZ4_ipins, OZ4_opins : std_logic_vector(7 downto 0);

signal instruction_mem_out : std_logic_vector(11 downto 0);
signal instruction_addr : std_logic_vector(31 downto 0);
signal immediate_mem_out : std_logic_vector(31 downto 0);
signal immediate_addr : std_logic_vector(5 downto 0);

signal data_mem_addr, data_mem_in, data_mem_out: std_logic_vector(31 downto 0);
signal data_mem_we : std_logic;

begin

	OZ4_iport <= x"50505050";
	OZ4_ipins <= "01011000";
	
	OZ4 : OZ4_top
	port map(clk => clk,
				rst => rst,
				
				iport => OZ4_iport,
				ipins => OZ4_ipins,
				
				oport => OZ4_oport,
				opins => OZ4_opins,
				
				instruction_in => instruction_mem_out,
				instruction_addr => instruction_addr,
				immediate_in => immediate_mem_out,
				immediate_addr => immediate_addr,
				
				mem_addr => data_mem_addr,
				mem_write_data => data_mem_in,
				mem_read_data => data_mem_out,
				mem_we_out => data_mem_we,
				mem_clk => open
				);
				
	data_mem : data_memory
	port map(clk => clk,
				rst => rst,
				
				address => data_mem_addr,
				data_in => data_mem_in,
				data_out => data_mem_out,
				we => data_mem_we
			   );
				
	prog_mem : instruction_memory
	port map(address => instruction_addr,
				data_out => instruction_mem_out,
				immediate_addr => immediate_addr,
				immediate_out => immediate_mem_out
				);

end Behavioral;

