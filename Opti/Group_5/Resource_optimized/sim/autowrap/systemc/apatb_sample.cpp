// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "ap_stream.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "dense_13_input_input_array"
#define AUTOTB_TVIN_dense_13_input_input_array  "../tv/cdatafile/c.sample.autotvin_dense_13_input_input_array.dat"
// wrapc file define: "dense_13_input_input_dim"
#define AUTOTB_TVIN_dense_13_input_input_dim  "../tv/cdatafile/c.sample.autotvin_dense_13_input_input_dim.dat"
// wrapc file define: "dense_13_input_input_numel"
#define AUTOTB_TVIN_dense_13_input_input_numel  "../tv/cdatafile/c.sample.autotvin_dense_13_input_input_numel.dat"
// wrapc file define: "dense_13_input_input_shape"
#define AUTOTB_TVIN_dense_13_input_input_shape  "../tv/cdatafile/c.sample.autotvin_dense_13_input_input_shape.dat"
// wrapc file define: "dense_16_output_arrray"
#define AUTOTB_TVIN_dense_16_output_arrray  "../tv/cdatafile/c.sample.autotvin_dense_16_output_arrray.dat"
#define AUTOTB_TVOUT_dense_16_output_arrray  "../tv/cdatafile/c.sample.autotvout_dense_16_output_arrray.dat"
// wrapc file define: "dense_16_output_numel"
#define AUTOTB_TVIN_dense_16_output_numel  "../tv/cdatafile/c.sample.autotvin_dense_16_output_numel.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "dense_16_output_arrray"
#define AUTOTB_TVOUT_PC_dense_16_output_arrray  "../tv/rtldatafile/rtl.sample.autotvout_dense_16_output_arrray.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			dense_13_input_input_array_depth = 0;
			dense_13_input_input_dim_depth = 0;
			dense_13_input_input_numel_depth = 0;
			dense_13_input_input_shape_depth = 0;
			dense_16_output_arrray_depth = 0;
			dense_16_output_numel_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{dense_13_input_input_array " << dense_13_input_input_array_depth << "}\n";
			total_list << "{dense_13_input_input_dim " << dense_13_input_input_dim_depth << "}\n";
			total_list << "{dense_13_input_input_numel " << dense_13_input_input_numel_depth << "}\n";
			total_list << "{dense_13_input_input_shape " << dense_13_input_input_shape_depth << "}\n";
			total_list << "{dense_16_output_arrray " << dense_16_output_arrray_depth << "}\n";
			total_list << "{dense_16_output_numel " << dense_16_output_numel_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int dense_13_input_input_array_depth;
		int dense_13_input_input_dim_depth;
		int dense_13_input_input_numel_depth;
		int dense_13_input_input_shape_depth;
		int dense_16_output_arrray_depth;
		int dense_16_output_numel_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" void sample (
float dense_13_input_input_array[128],
long long unsigned int dense_13_input_input_dim,
long long unsigned int* dense_13_input_input_numel,
long long unsigned int dense_13_input_input_shape[5],
float dense_16_output_arrray[1],
long long unsigned int dense_16_output_dim,
long long unsigned int* dense_16_output_numel,
long long unsigned int dense_16_output_shape[5]);

extern "C" void AESL_WRAP_sample (
float dense_13_input_input_array[128],
long long unsigned int dense_13_input_input_dim,
long long unsigned int* dense_13_input_input_numel,
long long unsigned int dense_13_input_input_shape[5],
float dense_16_output_arrray[1],
long long unsigned int dense_16_output_dim,
long long unsigned int* dense_16_output_numel,
long long unsigned int dense_16_output_shape[5])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "dense_16_output_arrray"
		aesl_fh.read(AUTOTB_TVOUT_PC_dense_16_output_arrray, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_dense_16_output_arrray, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_dense_16_output_arrray, AESL_token); // data

			sc_bv<32> *dense_16_output_arrray_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dense_16_output_arrray', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'dense_16_output_arrray', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					dense_16_output_arrray_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_dense_16_output_arrray, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_dense_16_output_arrray))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: dense_16_output_arrray
				{
					// bitslice(31, 0)
					// {
						// celement: dense_16_output_arrray(31, 0)
						// {
							sc_lv<32>* dense_16_output_arrray_lv0_0_0_1 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: dense_16_output_arrray(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(dense_16_output_arrray[0]) != NULL) // check the null address if the c port is array or others
								{
									dense_16_output_arrray_lv0_0_0_1[hls_map_index].range(31, 0) = sc_bv<32>(dense_16_output_arrray_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: dense_16_output_arrray(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : dense_16_output_arrray[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : dense_16_output_arrray[0]
								// output_left_conversion : *(int*)&dense_16_output_arrray[i_0]
								// output_type_conversion : (dense_16_output_arrray_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(dense_16_output_arrray[0]) != NULL) // check the null address if the c port is array or others
								{
									*(int*)&dense_16_output_arrray[i_0] = (dense_16_output_arrray_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] dense_16_output_arrray_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "dense_13_input_input_array"
		char* tvin_dense_13_input_input_array = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_dense_13_input_input_array);

		// "dense_13_input_input_dim"
		char* tvin_dense_13_input_input_dim = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_dense_13_input_input_dim);

		// "dense_13_input_input_numel"
		char* tvin_dense_13_input_input_numel = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_dense_13_input_input_numel);

		// "dense_13_input_input_shape"
		char* tvin_dense_13_input_input_shape = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_dense_13_input_input_shape);

		// "dense_16_output_arrray"
		char* tvin_dense_16_output_arrray = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_dense_16_output_arrray);
		char* tvout_dense_16_output_arrray = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_dense_16_output_arrray);

		// "dense_16_output_numel"
		char* tvin_dense_16_output_numel = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_dense_16_output_numel);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_dense_13_input_input_array, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_dense_13_input_input_array, tvin_dense_13_input_input_array);

		sc_bv<32>* dense_13_input_input_array_tvin_wrapc_buffer = new sc_bv<32>[128];

		// RTL Name: dense_13_input_input_array
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: dense_13_input_input_array(31, 0)
				{
					// carray: (0) => (127) @ (1)
					for (int i_0 = 0; i_0 <= 127; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : dense_13_input_input_array[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dense_13_input_input_array[0]
						// regulate_c_name       : dense_13_input_input_array
						// input_type_conversion : *(int*)&dense_13_input_input_array[i_0]
						if (&(dense_13_input_input_array[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> dense_13_input_input_array_tmp_mem;
							dense_13_input_input_array_tmp_mem = *(int*)&dense_13_input_input_array[i_0];
							dense_13_input_input_array_tvin_wrapc_buffer[hls_map_index].range(31, 0) = dense_13_input_input_array_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 128; i++)
		{
			sprintf(tvin_dense_13_input_input_array, "%s\n", (dense_13_input_input_array_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_dense_13_input_input_array, tvin_dense_13_input_input_array);
		}

		tcl_file.set_num(128, &tcl_file.dense_13_input_input_array_depth);
		sprintf(tvin_dense_13_input_input_array, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_dense_13_input_input_array, tvin_dense_13_input_input_array);

		// release memory allocation
		delete [] dense_13_input_input_array_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_dense_13_input_input_dim, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_dense_13_input_input_dim, tvin_dense_13_input_input_dim);

		sc_bv<64> dense_13_input_input_dim_tvin_wrapc_buffer;

		// RTL Name: dense_13_input_input_dim
		{
			// bitslice(63, 0)
			{
				// celement: dense_13_input_input_dim(63, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : dense_13_input_input_dim
						// sub_1st_elem          : 
						// ori_name_1st_elem     : dense_13_input_input_dim
						// regulate_c_name       : dense_13_input_input_dim
						// input_type_conversion : dense_13_input_input_dim
						if (&(dense_13_input_input_dim) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<64> dense_13_input_input_dim_tmp_mem;
							dense_13_input_input_dim_tmp_mem = dense_13_input_input_dim;
							dense_13_input_input_dim_tvin_wrapc_buffer.range(63, 0) = dense_13_input_input_dim_tmp_mem.range(63, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_dense_13_input_input_dim, "%s\n", (dense_13_input_input_dim_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_dense_13_input_input_dim, tvin_dense_13_input_input_dim);
		}

		tcl_file.set_num(1, &tcl_file.dense_13_input_input_dim_depth);
		sprintf(tvin_dense_13_input_input_dim, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_dense_13_input_input_dim, tvin_dense_13_input_input_dim);

		// [[transaction]]
		sprintf(tvin_dense_13_input_input_numel, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_dense_13_input_input_numel, tvin_dense_13_input_input_numel);

		sc_bv<64>* dense_13_input_input_numel_tvin_wrapc_buffer = new sc_bv<64>[1];

		// RTL Name: dense_13_input_input_numel
		{
			// bitslice(63, 0)
			{
				int hls_map_index = 0;
				// celement: dense_13_input_input_numel(63, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : dense_13_input_input_numel[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dense_13_input_input_numel[0]
						// regulate_c_name       : dense_13_input_input_numel
						// input_type_conversion : dense_13_input_input_numel[i_0]
						if (&(dense_13_input_input_numel[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<64> dense_13_input_input_numel_tmp_mem;
							dense_13_input_input_numel_tmp_mem = dense_13_input_input_numel[i_0];
							dense_13_input_input_numel_tvin_wrapc_buffer[hls_map_index].range(63, 0) = dense_13_input_input_numel_tmp_mem.range(63, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_dense_13_input_input_numel, "%s\n", (dense_13_input_input_numel_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_dense_13_input_input_numel, tvin_dense_13_input_input_numel);
		}

		tcl_file.set_num(1, &tcl_file.dense_13_input_input_numel_depth);
		sprintf(tvin_dense_13_input_input_numel, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_dense_13_input_input_numel, tvin_dense_13_input_input_numel);

		// release memory allocation
		delete [] dense_13_input_input_numel_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_dense_13_input_input_shape, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_dense_13_input_input_shape, tvin_dense_13_input_input_shape);

		sc_bv<64>* dense_13_input_input_shape_tvin_wrapc_buffer = new sc_bv<64>[5];

		// RTL Name: dense_13_input_input_shape
		{
			// bitslice(63, 0)
			{
				int hls_map_index = 0;
				// celement: dense_13_input_input_shape(63, 0)
				{
					// carray: (0) => (4) @ (1)
					for (int i_0 = 0; i_0 <= 4; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : dense_13_input_input_shape[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dense_13_input_input_shape[0]
						// regulate_c_name       : dense_13_input_input_shape
						// input_type_conversion : dense_13_input_input_shape[i_0]
						if (&(dense_13_input_input_shape[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<64> dense_13_input_input_shape_tmp_mem;
							dense_13_input_input_shape_tmp_mem = dense_13_input_input_shape[i_0];
							dense_13_input_input_shape_tvin_wrapc_buffer[hls_map_index].range(63, 0) = dense_13_input_input_shape_tmp_mem.range(63, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 5; i++)
		{
			sprintf(tvin_dense_13_input_input_shape, "%s\n", (dense_13_input_input_shape_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_dense_13_input_input_shape, tvin_dense_13_input_input_shape);
		}

		tcl_file.set_num(5, &tcl_file.dense_13_input_input_shape_depth);
		sprintf(tvin_dense_13_input_input_shape, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_dense_13_input_input_shape, tvin_dense_13_input_input_shape);

		// release memory allocation
		delete [] dense_13_input_input_shape_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_dense_16_output_arrray, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_dense_16_output_arrray, tvin_dense_16_output_arrray);

		sc_bv<32>* dense_16_output_arrray_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: dense_16_output_arrray
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: dense_16_output_arrray(31, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : dense_16_output_arrray[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dense_16_output_arrray[0]
						// regulate_c_name       : dense_16_output_arrray
						// input_type_conversion : *(int*)&dense_16_output_arrray[i_0]
						if (&(dense_16_output_arrray[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> dense_16_output_arrray_tmp_mem;
							dense_16_output_arrray_tmp_mem = *(int*)&dense_16_output_arrray[i_0];
							dense_16_output_arrray_tvin_wrapc_buffer[hls_map_index].range(31, 0) = dense_16_output_arrray_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_dense_16_output_arrray, "%s\n", (dense_16_output_arrray_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_dense_16_output_arrray, tvin_dense_16_output_arrray);
		}

		tcl_file.set_num(1, &tcl_file.dense_16_output_arrray_depth);
		sprintf(tvin_dense_16_output_arrray, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_dense_16_output_arrray, tvin_dense_16_output_arrray);

		// release memory allocation
		delete [] dense_16_output_arrray_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_dense_16_output_numel, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_dense_16_output_numel, tvin_dense_16_output_numel);

		sc_bv<64>* dense_16_output_numel_tvin_wrapc_buffer = new sc_bv<64>[1];

		// RTL Name: dense_16_output_numel
		{
			// bitslice(63, 0)
			{
				int hls_map_index = 0;
				// celement: dense_16_output_numel(63, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : dense_16_output_numel[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dense_16_output_numel[0]
						// regulate_c_name       : dense_16_output_numel
						// input_type_conversion : dense_16_output_numel[i_0]
						if (&(dense_16_output_numel[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<64> dense_16_output_numel_tmp_mem;
							dense_16_output_numel_tmp_mem = dense_16_output_numel[i_0];
							dense_16_output_numel_tvin_wrapc_buffer[hls_map_index].range(63, 0) = dense_16_output_numel_tmp_mem.range(63, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_dense_16_output_numel, "%s\n", (dense_16_output_numel_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_dense_16_output_numel, tvin_dense_16_output_numel);
		}

		tcl_file.set_num(1, &tcl_file.dense_16_output_numel_depth);
		sprintf(tvin_dense_16_output_numel, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_dense_16_output_numel, tvin_dense_16_output_numel);

		// release memory allocation
		delete [] dense_16_output_numel_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		sample(dense_13_input_input_array, dense_13_input_input_dim, dense_13_input_input_numel, dense_13_input_input_shape, dense_16_output_arrray, dense_16_output_dim, dense_16_output_numel, dense_16_output_shape);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_dense_16_output_arrray, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_dense_16_output_arrray, tvout_dense_16_output_arrray);

		sc_bv<32>* dense_16_output_arrray_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: dense_16_output_arrray
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: dense_16_output_arrray(31, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : dense_16_output_arrray[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : dense_16_output_arrray[0]
						// regulate_c_name       : dense_16_output_arrray
						// input_type_conversion : *(int*)&dense_16_output_arrray[i_0]
						if (&(dense_16_output_arrray[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> dense_16_output_arrray_tmp_mem;
							dense_16_output_arrray_tmp_mem = *(int*)&dense_16_output_arrray[i_0];
							dense_16_output_arrray_tvout_wrapc_buffer[hls_map_index].range(31, 0) = dense_16_output_arrray_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_dense_16_output_arrray, "%s\n", (dense_16_output_arrray_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_dense_16_output_arrray, tvout_dense_16_output_arrray);
		}

		tcl_file.set_num(1, &tcl_file.dense_16_output_arrray_depth);
		sprintf(tvout_dense_16_output_arrray, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_dense_16_output_arrray, tvout_dense_16_output_arrray);

		// release memory allocation
		delete [] dense_16_output_arrray_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "dense_13_input_input_array"
		delete [] tvin_dense_13_input_input_array;
		// release memory allocation: "dense_13_input_input_dim"
		delete [] tvin_dense_13_input_input_dim;
		// release memory allocation: "dense_13_input_input_numel"
		delete [] tvin_dense_13_input_input_numel;
		// release memory allocation: "dense_13_input_input_shape"
		delete [] tvin_dense_13_input_input_shape;
		// release memory allocation: "dense_16_output_arrray"
		delete [] tvin_dense_16_output_arrray;
		delete [] tvout_dense_16_output_arrray;
		// release memory allocation: "dense_16_output_numel"
		delete [] tvin_dense_16_output_numel;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

