//Output class that formats the VHDL output

#ifndef OUTPUT_H
#define OUTPUT_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

#include "Checker.h"

using namespace std;

class Output {
	public:
		ofstream filestream;
		ofstream filestream2;
		Checker chkr;

		string fileName;
		string fileName2;
		string opcode;
		string immAddr;
		int instrAddr;

		Output(string, string);
		void writeHeader();
		void writeImm(int, int);
		void writeInstr();
		void writeEnd();
		void formatAddr(int);
};

#endif
