--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:35:00 03/08/2011
-- Design Name:   
-- Module Name:   C:/Users/Ben/Desktop/Folders/Projects/Personal/Senior Project/OZ-4/OZ-4 FPGA/OZ4/IO_ctl_TB.vhd
-- Project Name:  OZ4
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: IO_ctl
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY IO_ctl_TB IS
END IO_ctl_TB;
 
ARCHITECTURE behavior OF IO_ctl_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT IO_ctl
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         iport : IN  std_logic_vector(31 downto 0);
         iport_data : OUT  std_logic_vector(31 downto 0);
         ipins : IN  std_logic_vector(7 downto 0);
         ipins_data : OUT  std_logic_vector(31 downto 0);
         ipins_sel : IN  std_logic_vector(2 downto 0);
         oport : OUT  std_logic_vector(31 downto 0);
         oport_data : IN  std_logic_vector(31 downto 0);
         oport_en : IN  std_logic;
         opins : OUT  std_logic_vector(7 downto 0);
         opins_data : IN  std_logic_vector(31 downto 0);
         opins_sel : IN  std_logic_vector(2 downto 0);
         opins_en : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal iport : std_logic_vector(31 downto 0) := (others => '0');
   signal ipins : std_logic_vector(7 downto 0) := (others => '0');
   signal ipins_sel : std_logic_vector(2 downto 0) := (others => '0');
   signal oport_data : std_logic_vector(31 downto 0) := (others => '0');
   signal oport_en : std_logic := '0';
   signal opins_data : std_logic_vector(31 downto 0) := (others => '0');
   signal opins_sel : std_logic_vector(2 downto 0) := (others => '0');
   signal opins_en : std_logic := '0';

 	--Outputs
   signal iport_data : std_logic_vector(31 downto 0);
   signal ipins_data : std_logic_vector(31 downto 0);
   signal oport : std_logic_vector(31 downto 0);
   signal opins : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: IO_ctl PORT MAP (
          clk => clk,
          rst => rst,
          iport => iport,
          iport_data => iport_data,
          ipins => ipins,
          ipins_data => ipins_data,
          ipins_sel => ipins_sel,
          oport => oport,
          oport_data => oport_data,
          oport_en => oport_en,
          opins => opins,
          opins_data => opins_data,
          opins_sel => opins_sel,
          opins_en => opins_en
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '1';
		wait for clk_period/2;
		clk <= '0';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
			rst <= '1';
		wait for 1000 ns;
			rst <= '0';
			
			iport <= x"12345678";
			ipins <= x"FA";
			ipins_sel <= o"6";
			
		wait for 10 ns;
			oport_data <= x"87654321";
			oport_en <= '1';
			opins_data <= x"00000001";
			opins_sel <= o"5";
			opins_en <= '1';
		wait for 10 ns;
			oport_data <= x"00000000";
			oport_en <= '0';
			opins_data <= x"00000000";
			opins_sel <= o"0";
			opins_en <= '0';
			ipins_sel <= o"0";
		wait for 10 ns;
			opins_data <= x"00000001";
			opins_sel <= o"3";
			opins_en <= '1';
		wait for 10 ns;
			opins_data <= x"00000000";
			opins_sel <= o"5";
			opins_en <= '1';
      wait;
   end process;

END;
