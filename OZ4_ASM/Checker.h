//Checker class that checks the validity of opcodes, label mnemonics, and number ranges

#ifndef CHECKER_H
#define CHECKER_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Checker {
	public:
		string opcodeTable[34][2];
		string opcodeBinary;
		string immBinary;
		int immNum;
		
		Checker();
		bool opcode(string);
		bool label(string);
		bool immediate(string);
};

#endif
