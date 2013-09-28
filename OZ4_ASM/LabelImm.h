//LabelImm class that runs the first pass for labels and immediate values

#ifndef LABELIMM_H
#define LABELIMM_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

#include "Checker.h"

#define MAX_LABELS 1000
#define MAX_IMMS 64

using namespace std;

class LabelImm {
	public:
		ifstream filestream;
		Checker chkr;

		string LabelTable[MAX_LABELS][2];
		int ImmTable[MAX_IMMS];
		int CurrLine;
		int InstrAddr;
		int CurrImm;
		int CurrLabel;
		string line;

		LabelImm(string);
		string getLine();
		int getLabelImm();
};

#endif
