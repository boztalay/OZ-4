//LabelImm class that runs the first pass for labels and immediate values

#include "LabelImm.h"

#define MAX_LABELS 1000
#define MAX_IMMS 64

LabelImm::LabelImm(string file) {
	filestream.open(file.c_str());

	CurrLine = 0;
	InstrAddr = 0;
	CurrImm = 0;
	CurrLabel = 0;

	//Init the immTable
	for(int i = 0; i < 64; i++) {
		ImmTable[i] = '\0';
	}

	if(!filestream.is_open()) {
		cout << endl << endl << "Problem opening file (LabelImm)\n";
		system("pause");
	}
}

string LabelImm::getLine() {
	getline(filestream, line);
	CurrLine++;
	return line;
}

int LabelImm::getLabelImm() {
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int tempImm = 0;
	bool immFlag = false;
	char buffer[6];
	string buffer_s;
	string temp;

	if(line[0] == '\n' || line[0] == '\0' || line[line.find_first_not_of(" \t")] == string::npos) {
		return 0;
	} else {
		//Get the first word in the line
		i = line.find_first_not_of(" \t");
		j = line.find_first_of(" \t\n", i + 1);
		temp = line.substr(i, (j - i));

		if(temp[0] != '#') {
			if(chkr.opcode(temp)) {
				InstrAddr++;
				return 0;
			} else if(chkr.immediate(temp)) {
				InstrAddr++;
				tempImm = atoi(temp.c_str());
				immFlag = true;				

				//Search for old immediates
				while(l < 64) {
					if(tempImm == ImmTable[l]) {
						immFlag = false;
						break;
					}
					l++;
				}

				if(immFlag){
					ImmTable[CurrImm] = tempImm;
					CurrImm++;
					return 1;
				} else {
					return 0;
				}
			} else if(chkr.label(temp)) {
				itoa((InstrAddr + 1), buffer, 10);
				LabelTable[CurrLabel][1] = buffer;
				ImmTable[CurrImm] = (InstrAddr + 1);
				CurrImm++;

				//Get the next word for the label
				k = j;
				i = line.find_first_not_of(" \t", k);
				j = line.find_first_of(" \t\n", i + 1);
				temp = line.substr(i, (j - i));
				
				LabelTable[CurrLabel][0] = temp;
				CurrLabel++;
				return 2;
			} else {
				InstrAddr++;
				return false;
			}
		} else {
			return false;
		}
	}
}

		



















