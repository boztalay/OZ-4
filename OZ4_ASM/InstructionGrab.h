//InstructionGrab class that takes in lines and checks them for opcodes

#ifndef INSTRGRAB_H
#define INSTRGRAB_H

#define MAX_LABELS 1000
#define MAX_IMMS 64

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

#include "Checker.h"

using namespace std;

class InstructionGrab {
	public:
		ifstream filestream;
		Checker chkr;

		string LabelTable[MAX_LABELS][2];
		int ImmTable[MAX_IMMS];
		
		string line;
		string opcode;
		string immAddr;
		string temp;

		int CurrLine;
		int InstrAddr;

		InstructionGrab(string);
		string getLine();
		bool getOpcode();
};

#endif
