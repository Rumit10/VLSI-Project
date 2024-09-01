// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __k2c_dense_3_densexdS_H__
#define __k2c_dense_3_densexdS_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct k2c_dense_3_densexdS_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 128;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(k2c_dense_3_densexdS_ram) {
        ram[0] = "0b00111011101000011110010011001100";
        ram[1] = "0b00111101001011100101000000110101";
        ram[2] = "0b10111011001110001101011100010010";
        ram[3] = "0b10111100001010101101101111111010";
        ram[4] = "0b00111100101100001011010100101000";
        ram[5] = "0b00111101011011111011101001010000";
        ram[6] = "0b00111100111001111110101110101100";
        ram[7] = "0b00111100100111010111111001011101";
        ram[8] = "0b10111100101101001000001000011110";
        ram[9] = "0b00111100011111110110101001001001";
        ram[10] = "0b10111011101010000111110100000100";
        ram[11] = "0b00111011111110000010101100111010";
        ram[12] = "0b00111100101001010000010101010110";
        ram[13] = "0b00111100110111110111111101010010";
        ram[14] = "0b00111101000100101100010101110001";
        ram[15] = "0b10111010000110100110101101111010";
        ram[16] = "0b00111100111100001001101110111010";
        ram[17] = "0b10111011111101001110001001010100";
        ram[18] = "0b00111101010110111111100010100110";
        ram[19] = "0b10111100100110110011100101101011";
        ram[20] = "0b00111100100110000100000011101001";
        ram[21] = "0b00111101010110010100110010101101";
        ram[22] = "0b10111101010010100110111010001010";
        ram[23] = "0b00111100000111011101101000110111";
        ram[24] = "0b00111100011100111011001001001101";
        ram[25] = "0b10111011000110010000110110001001";
        ram[26] = "0b10111100100010111011001100110010";
        ram[27] = "0b10111100101001100101110111010100";
        ram[28] = "0b00111101100000100100100011100010";
        ram[29] = "0b00111100111010000100010001011000";
        ram[30] = "0b00111010110111010101001101010001";
        ram[31] = "0b00111100100011101001010101011110";
        ram[32] = "0b00111101000010110110010100100011";
        ram[33] = "0b00111101000110000010100000101010";
        ram[34] = "0b00111011110101011010101101110000";
        ram[35] = "0b00111101100011101001111101111011";
        ram[36] = "0b10111100000111011100111110000001";
        ram[37] = "0b00111101000000011011101111010100";
        ram[38] = "0b10111100011110011001111000101011";
        ram[39] = "0b00111011100101001010000011001001";
        ram[40] = "0b10111100011011111111110010011010";
        ram[41] = "0b00111100111010011100001000011111";
        ram[42] = "0b00111100011110111110000111000010";
        ram[43] = "0b00111011000000001000111011110111";
        ram[44] = "0b00111100001110001110101000000111";
        ram[45] = "0b00111101001000001010010000000111";
        ram[46] = "0b00111101001001111001001100101010";
        ram[47] = "0b00111100111101010011001100011010";
        ram[48] = "0b00111100000110110001011100001010";
        ram[49] = "0b00111101100000011000011011010000";
        ram[50] = "0b10111101000011011000001101111001";
        ram[51] = "0b00111100110101101110101011101101";
        ram[52] = "0b10111100011101110000001101000100";
        ram[53] = "0b10111100001010100001101010100101";
        ram[54] = "0b10111100110110001101111001111110";
        ram[55] = "0b10111101010011000110011100010010";
        ram[56] = "0b00111101001101010111100110110111";
        ram[57] = "0b00111100111100011100001000000001";
        ram[58] = "0b00111100110001111010000111001111";
        ram[59] = "0b10111100111000010000000101110000";
        ram[60] = "0b00111100101100110100001011110100";
        ram[61] = "0b00111011101110100011110000011010";
        ram[62] = "0b00111101001000101100111011000101";
        ram[63] = "0b10111100000111101101101001100001";
        ram[64] = "0b00111101000101100111100101101101";
        ram[65] = "0b00111100101000111111010111010110";
        ram[66] = "0b00111100011101011011110110111100";
        ram[67] = "0b10111100100011001001010011001010";
        ram[68] = "0b00111100110001100011000101101101";
        ram[69] = "0b00111101000001011000101100001100";
        ram[70] = "0b10111101000000010111010111011101";
        ram[71] = "0b00111101011110111011100010000010";
        ram[72] = "0b00111100100101001011110110110001";
        ram[73] = "0b00111100000101110111000100111101";
        ram[74] = "0b00111101001101101100010010101101";
        ram[75] = "0b10111100111110011100000100111001";
        ram[76] = "0b00111100110100011110001011000110";
        ram[77] = "0b00111100111011100011000110111111";
        ram[78] = "0b10111100101010000011000000100001";
        ram[79] = "0b00111101000101001110111110111001";
        ram[80] = "0b00111100010111001110001001010011";
        ram[81] = "0b00111100101110110111111010011111";
        ram[82] = "0b00111100101010001100100111110010";
        ram[83] = "0b10111010100101100110100001010001";
        ram[84] = "0b10111100010010000011100010110100";
        ram[85] = "0b00111101001001111101111111011101";
        ram[86] = "0b10111101100011001000011011111000";
        ram[87] = "0b10111100101111111001010100110000";
        ram[88] = "0b00111101001001110101000001011011";
        ram[89] = "0b00111010100010001100111011011010";
        ram[90] = "0b00111101001100100100010011111000";
        ram[91] = "0b00111101001110001010010111100111";
        ram[92] = "0b10111100010001101111000000101010";
        ram[93] = "0b00111100111001111010100110100010";
        ram[94] = "0b00111101000100110111011000000100";
        ram[95] = "0b00111100111010110010011011000101";
        ram[96] = "0b00111100001001010110001010011011";
        ram[97] = "0b00111100111001011010000000000011";
        ram[98] = "0b00111101000001001100001100111000";
        ram[99] = "0b00111101011010110010001001110010";
        ram[100] = "0b10111100100100000111000010000111";
        ram[101] = "0b10111011101011011110110100001001";
        ram[102] = "0b10111010001000011010110111001010";
        ram[103] = "0b00111101100001111000000001100110";
        ram[104] = "0b00111100000110100111110001100011";
        ram[105] = "0b00111101000110011110001010010100";
        ram[106] = "0b00111010001111010110000010101000";
        ram[107] = "0b00111100010110111000001011110011";
        ram[108] = "0b00111101011010110100000100000011";
        ram[109] = "0b00111101010000000001000101010001";
        ram[110] = "0b00111101000011110101101001111010";
        ram[111] = "0b10111100111010001000011110111111";
        ram[112] = "0b00111101000001100110110101100010";
        ram[113] = "0b00111101000000110001111000111011";
        ram[114] = "0b00111100100110011010001010010101";
        ram[115] = "0b00111100110100110110111001111010";
        ram[116] = "0b00111100101101111111100010110011";
        ram[117] = "0b00111100100000101010101001000000";
        ram[118] = "0b00111100011011001101001110001010";
        ram[119] = "0b10111011011101110111110111011011";
        ram[120] = "0b00111100111001110000001001100101";
        ram[121] = "0b00111101000110111010001111010101";
        ram[122] = "0b00111101001110011100110001110011";
        ram[123] = "0b00111101011000100010011110110110";
        ram[124] = "0b10111100001001001111011001101011";
        ram[125] = "0b00111100101100110000100100110101";
        ram[126] = "0b10111010111000000101001011000100";
        ram[127] = "0b00111101010001100111011111101001";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(k2c_dense_3_densexdS) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 128;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


k2c_dense_3_densexdS_ram* meminst;


SC_CTOR(k2c_dense_3_densexdS) {
meminst = new k2c_dense_3_densexdS_ram("k2c_dense_3_densexdS_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~k2c_dense_3_densexdS() {
    delete meminst;
}


};//endmodule
#endif
