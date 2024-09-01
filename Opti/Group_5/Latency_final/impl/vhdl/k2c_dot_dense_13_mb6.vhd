-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity k2c_dot_dense_13_mb6_rom is 
    generic(
             DWIDTH     : integer := 32; 
             AWIDTH     : integer := 9; 
             MEM_SIZE    : integer := 320
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of k2c_dot_dense_13_mb6_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "10111101010011001111000100001100", 
    1 => "00111101101000001001101101111000", 
    2 => "00111101101011011000001010001000", 
    3 => "10111101111001100100111011010101", 
    4 => "00111101111110110011100110100110", 
    5 => "00111100101010110111101011000011", 
    6 => "10111100110100101011111100000101", 
    7 => "00111010001000011100101010001100", 
    8 => "00111110001010100101111000101010", 
    9 => "00111101011110011101001001010111", 
    10 => "10111101010001110110000101110001", 
    11 => "10111101011001011001101101100111", 
    12 => "10111100000111001100101101001011", 
    13 => "00111100110100111110110111100011", 
    14 => "00111110001101011000100001010111", 
    15 => "00111110011100001011111010010010", 
    16 => "00111100110110101100011001011110", 
    17 => "00111101100100110111010011000100", 
    18 => "00111110001000100100001100011110", 
    19 => "10111110011000111101100111110110", 
    20 => "00111100110101110000001010010010", 
    21 => "10111101011111100010111111110100", 
    22 => "00111011101000000000001000001111", 
    23 => "10111100100101110110001100101001", 
    24 => "00111110000011011111000010111000", 
    25 => "00111101110110101000100011111011", 
    26 => "00111110010100100111000001011001", 
    27 => "00111011110111101011110110100100", 
    28 => "10111101100000000101110101101011", 
    29 => "10111110011101010101111101011000", 
    30 => "10111100011101001001100110010010", 
    31 => "10111110000011010000111110101000", 
    32 => "10111100010011111000010101001101", 
    33 => "10111101011000100110011000110100", 
    34 => "00111101100111011100010011001000", 
    35 => "00111110000001000010100101111010", 
    36 => "10111110000111011000100110010101", 
    37 => "10111101000010101110110001110011", 
    38 => "10111110001010111011000001101110", 
    39 => "00111101101101100111100011110111", 
    40 => "10111101010110010001111000100110", 
    41 => "10111100001110111010101011010111", 
    42 => "00111110000000000011011110011001", 
    43 => "00111101111001111110001011100111", 
    44 => "00111101111000001101000000010010", 
    45 => "10111100001101001100100101011011", 
    46 => "10111011110111110000010101101101", 
    47 => "10111101110100001111111001100101", 
    48 => "10111110000011100110000111111001", 
    49 => "10111110001000100101001101110000", 
    50 => "10111110001101101000100101000001", 
    51 => "00111110000001001110001010100010", 
    52 => "10111110010010000001110101110101", 
    53 => "00111110010100111111000110010100", 
    54 => "10111110000010010011101001000000", 
    55 => "10111100110010000110010000111010", 
    56 => "00111110001101010011100001011100", 
    57 => "00111100001011101001101000100101", 
    58 => "10111100100100000000001010000110", 
    59 => "00111110000100100101000011111100", 
    60 => "00111011001101100100011100100111", 
    61 => "00111110010000010111011010110011", 
    62 => "00111110000111010011011101010010", 
    63 => "10111101010101001011111000011011", 
    64 => "00111101000011101011000111000111", 
    65 => "00111101100110100011101111111111", 
    66 => "00111101111111101100111011100111", 
    67 => "10111110001000001011101110000001", 
    68 => "10111101010110101000100001000011", 
    69 => "10111100111111101001010100010100", 
    70 => "10111101100001100010011001100101", 
    71 => "10111100111010110001011110110100", 
    72 => "00111101001011100100001110101110", 
    73 => "10111010111100010000111101100010", 
    74 => "00111100001011100100000110110101", 
    75 => "00111110000101001101001111001001", 
    76 => "00111110000101010011010100111101", 
    77 => "10111100110000001101100101100010", 
    78 => "00111110001010100110011010101010", 
    79 => "10111100110101100010000000100100", 
    80 => "00111110010100111111100101101011", 
    81 => "00111110011111001000011110101010", 
    82 => "10111100101010110111111001101101", 
    83 => "00111101011110100001110001000111", 
    84 => "10111101101001101011001011110111", 
    85 => "10111110100000101010111010111111", 
    86 => "00111110000001011000000010110010", 
    87 => "10111100101110110110100101001100", 
    88 => "10111110000000000111101010001000", 
    89 => "00111110001001000000011101110000", 
    90 => "10111110001001010010101000111011", 
    91 => "10111101100111011100000011000011", 
    92 => "10111110001110011101101110101101", 
    93 => "00111110010110111001011010110010", 
    94 => "00111101110000110010000011111101", 
    95 => "10111101101001111100000010000001", 
    96 => "00111101100000111111000000100001", 
    97 => "10111101000111010111110001010011", 
    98 => "10111110000011001101111100110100", 
    99 => "00111101100001110011011101111010", 
    100 => "10111100111110011001101001101011", 
    101 => "00111100110001100101001010111100", 
    102 => "10111110000101010100100110110100", 
    103 => "10111110000001000110101100001110", 
    104 => "10111100100111011000100111100100", 
    105 => "00111101011010001010110000000011", 
    106 => "00111110000000111011000110010100", 
    107 => "00111110011011100011010010000011", 
    108 => "10111101000100100001111010010100", 
    109 => "00111110000111100100011010100110", 
    110 => "00111010110110010100001001001001", 
    111 => "10111101100001111101011110110011", 
    112 => "10111110000010011011001110010000", 
    113 => "00111101111010100110010011101110", 
    114 => "00111101010100110110111101010001", 
    115 => "00111110001111110101001111100111", 
    116 => "10111110010010110101110111110010", 
    117 => "00111110010111000011010101010110", 
    118 => "10111110000000101111110100101100", 
    119 => "00111101111001110001110010101111", 
    120 => "10111101001001001101000100000001", 
    121 => "10111101110100110110111010111011", 
    122 => "00111101000100001010101111101110", 
    123 => "00111011100111100010001010010000", 
    124 => "10111110001001101100010011111110", 
    125 => "10111110001100100110011000111000", 
    126 => "10111110011001011010110010110110", 
    127 => "10111101111010010001110000101011", 
    128 => "00111101101000011100110100111110", 
    129 => "10111110000111110101110010001001", 
    130 => "10111100101000010101110000111010", 
    131 => "00111101000000011010000111111000", 
    132 => "00111100101100010001111010010010", 
    133 => "10111110001010101011000000001011", 
    134 => "10111101011100100101010111101000", 
    135 => "10111101111000111110111101011100", 
    136 => "00111101111001011010111101101011", 
    137 => "00111101011101101011101110101000", 
    138 => "00111101101010100110000110010111", 
    139 => "00111101011000111110001000100000", 
    140 => "10111101010000010010001110111101", 
    141 => "00111110001110100111000000000101", 
    142 => "00111110001101111001110100100001", 
    143 => "10111100100000100111110110111111", 
    144 => "10111101110111110001111100111011", 
    145 => "00111100000110100100011111110010", 
    146 => "00111110011000001001000111000011", 
    147 => "10111100100011011010110101011100", 
    148 => "00111110010001101101110111010011", 
    149 => "00111101100111000111010100010111", 
    150 => "10111101101000010010010001000100", 
    151 => "10111101111000101001100111101100", 
    152 => "10111110000001000001101000101101", 
    153 => "10111100100010110101010111100010", 
    154 => "10111110001101000101111100011101", 
    155 => "10111101001100011110001010011111", 
    156 => "00111110001010110001100100001011", 
    157 => "00111100100010000001111001100110", 
    158 => "00111110001000010111100010001110", 
    159 => "10111110000011110100111111011100", 
    160 => "00111101111001111011101001110100", 
    161 => "10111110010010011110011011000000", 
    162 => "00111101010010001111101110011100", 
    163 => "00111101000001100100011111110010", 
    164 => "00111110010001001011000011010000", 
    165 => "00111101001101101111110001001100", 
    166 => "00111101110010100001111001001101", 
    167 => "10111101110001101011001110100100", 
    168 => "10111101101000111101111011100100", 
    169 => "10111101111010001111001111010111", 
    170 => "10111101010011000110010010101011", 
    171 => "00111110001100101010110001101010", 
    172 => "00111101101001110101100000010111", 
    173 => "10111110000100111001111101010001", 
    174 => "00111101110010111001000011011001", 
    175 => "00111110000110010110010010010010", 
    176 => "00111110011000011101100010111001", 
    177 => "00111101011001011001101010001110", 
    178 => "00111100100001110110100110110001", 
    179 => "00111110010011011010101000111011", 
    180 => "10111110000001110101001111101000", 
    181 => "10111110000001000000011111011100", 
    182 => "00111110010011001011010101110101", 
    183 => "10111100001101101000101011101011", 
    184 => "10111101111001010110001111001111", 
    185 => "00111100110101001101011110000000", 
    186 => "10111101111000100110011000000100", 
    187 => "00111101100101110110111101111010", 
    188 => "10111101001111100101100111110100", 
    189 => "00111101000011110100100010001011", 
    190 => "00111110010111110000000100110000", 
    191 => "00111110010011011100011001011110", 
    192 => "10111101111001100110100111011010", 
    193 => "10111101111111101011010010111000", 
    194 => "10111101100011000100010001101111", 
    195 => "10111101001111110101100101101111", 
    196 => "10111110010001000110100001010011", 
    197 => "00111101010100110000111010001000", 
    198 => "10111101010000010000100000110011", 
    199 => "00111101101110011010001011010101", 
    200 => "10111101100101001000001100011000", 
    201 => "10111101000011111101010101101101", 
    202 => "10111110001100101110000101001000", 
    203 => "10111101000110111100011101011000", 
    204 => "10111011101100111001101101010101", 
    205 => "10111101110110000011000100111001", 
    206 => "10111110001111110100100011100111", 
    207 => "10111101101111011001101010101010", 
    208 => "10111101110101001101111110001100", 
    209 => "10111101000100011000100001001110", 
    210 => "10111110001001111100100111100001", 
    211 => "10111110000000100011000010011001", 
    212 => "00111110001010101100011101101000", 
    213 => "10111100100011110100110000100011", 
    214 => "10111100101100011000110000000110", 
    215 => "10111110001000011011000001011101", 
    216 => "00111110001100001011000010000000", 
    217 => "00111101001101110100111000011111", 
    218 => "10111110000000111011110100111101", 
    219 => "10111101100001010011010000001011", 
    220 => "10111110000111011001101110010111", 
    221 => "10111100101111011011100111000001", 
    222 => "00111100010001100101000100111111", 
    223 => "10111101110001110001100110000111", 
    224 => "10111011100111111010000000000101", 
    225 => "00111100110011101001000000110000", 
    226 => "10111101111001101011101000101100", 
    227 => "10111110010010010110111000100111", 
    228 => "10111110001100010011110000100001", 
    229 => "00111110010111010101011001001010", 
    230 => "10111110010011011110010011010101", 
    231 => "00111101101100110010110011000001", 
    232 => "00111110010110111110100100100010", 
    233 => "00111110001100110001011001110011", 
    234 => "10111100000101100000011010100110", 
    235 => "00111101001000101101011110100000", 
    236 => "10111101111011010000101001101010", 
    237 => "00111110010000010011011100000100", 
    238 => "00111110010001010000100000110110", 
    239 => "10111101110101000010000111111011", 
    240 => "10111110010011111010100000101001", 
    241 => "00111110000000000011101100101000", 
    242 => "10111110000010101110001010100110", 
    243 => "10111110000100101100010110111101", 
    244 => "00111100111001011011111111011110", 
    245 => "00111101000110001101000111011000", 
    246 => "10111110001000010010010101010101", 
    247 => "10111101111100101010010110100000", 
    248 => "10111100100101101111000111100001", 
    249 => "10111110000011011001101011100010", 
    250 => "10111110000010111001001000000000", 
    251 => "00111101001001011000100101010101", 
    252 => "10111101001010010111100100101010", 
    253 => "00111100001101000010100111110101", 
    254 => "00111101011111001100011111110010", 
    255 => "00111110000000110010001011000001", 
    256 => "10111011110011110001001100110111", 
    257 => "10111110001101111001010001110100", 
    258 => "00111101000110000000110010100110", 
    259 => "00111110001111001000000111011011", 
    260 => "00111101100011010000000111110010", 
    261 => "00111101100110110000100001000110", 
    262 => "10111101100010100011100011111001", 
    263 => "10111110000011000011110000111000", 
    264 => "10111100011010000000011100111011", 
    265 => "10111110010010001101011100011111", 
    266 => "00111101111010101001011001111100", 
    267 => "10111101100101100110001110011010", 
    268 => "00111101010111000110101110000000", 
    269 => "10111100010110001100001010101001", 
    270 => "00111110001110011101000000001111", 
    271 => "10111100110010111001110001010001", 
    272 => "00111100001010100111011001000110", 
    273 => "10111110000001011100100001010100", 
    274 => "00111101100010110100010111000101", 
    275 => "10111110000001001100101100101011", 
    276 => "00111101001100010000010111010001", 
    277 => "00111101111101001001100110101010", 
    278 => "00111101001010101100001111110000", 
    279 => "00111100100111111100010100001110", 
    280 => "10111110001010010111000010110010", 
    281 => "00111101100101010100110001001000", 
    282 => "10111101111000110100010110000010", 
    283 => "10111101100100001101001100100110", 
    284 => "00111101010010101100101101101011", 
    285 => "10111101010001011001111110000111", 
    286 => "10111110001001010110100011011000", 
    287 => "00111100010100111100110100011001", 
    288 => "10111110010010100111110100010000", 
    289 => "10111110010000100100111011010001", 
    290 => "10111101101111110110001000111101", 
    291 => "10111100101110101100100100110100", 
    292 => "00111110001101010110010010100001", 
    293 => "00111110001001010000110000000011", 
    294 => "00111101110111111001110111001111", 
    295 => "10111100000101111011011111001001", 
    296 => "00111101011101100100000000001011", 
    297 => "10111110000001110100000110101101", 
    298 => "00111101010101001101100011001010", 
    299 => "10111101100100011101100111101011", 
    300 => "10111101011111111000001010100011", 
    301 => "10111110000001011010111101110111", 
    302 => "10111110000000011001000100110111", 
    303 => "00111101111101110100101110000000", 
    304 => "00111101010011010010011111001110", 
    305 => "10111101011100101110110110010101", 
    306 => "10111110011001011110100010100100", 
    307 => "00111101001101010000000001100111", 
    308 => "10111101101101000011010111100100", 
    309 => "00111101011100111011010001011000", 
    310 => "00111110000010101001011000110100", 
    311 => "10111100011110000001001000101010", 
    312 => "10111101011110101000011010110100", 
    313 => "10111110001100000010001101011001", 
    314 => "10111110010011010111000001111110", 
    315 => "00111110001001011100001001110100", 
    316 => "00111011100101000011110000000010", 
    317 => "10111101101110010011111110110110", 
    318 => "00111110000100011100111111101111", 
    319 => "10111110000011111110010010101000" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity k2c_dot_dense_13_mb6 is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 320;
        AddressWidth : INTEGER := 9);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of k2c_dot_dense_13_mb6 is
    component k2c_dot_dense_13_mb6_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    k2c_dot_dense_13_mb6_rom_U :  component k2c_dot_dense_13_mb6_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


