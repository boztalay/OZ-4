//InstructionGrab class that takes in lines and checks them for opcodes

#include "InstructionGrab.h"

InstructionGrab::InstructionGrab(string file) {
	filestream.open(file.c_str());

	CurrLine = 0;
	InstrAddr = 0;

	if(!filestream.is_open()) {
		cout << endl << endl << "Problem opening file (InstructionGrab)\n";
		system("pause");
	}
}

string InstructionGrab::getLine() {
	getline(filestream, line);
	CurrLine++;
	return line;
}

bool InstructionGrab::getOpcode() {
	int i = 0;
	int j = 0;
	int k = 0;
	int immThing = 0;
	char buffer[6];
	bool labelFlag = false;

	if(line[0] == '\n' || line[0] == '\0' || line[line.find_first_not_of(" \t")] == string::npos) {
		return false;
	} else {
		//Get the first word in the line
		i = line.find_first_not_of(" \t");
		j = line.find_first_of(" \t\n", i + 1);
		temp = line.substr(i, (j - i));

		if(temp[0] == '#') {
			return false;
		} else {
			//Check if it's an opcode or an immediate
			if(chkr.immediate(temp)) {
				InstrAddr++;
				chkr.opcode("PUSH"); //get opcode for push
				opcode = chkr.opcodeBinary;

				for(immThing = 0; atoi(temp.c_str()) != ImmTable[immThing]; immThing++) {}

				itoa(immThing, buffer, 2); //get immediate addr in binary and extend it
				immAddr = buffer;
				while(immAddr.length() < 6) {
					immAddr.insert(0, "0");
				}		
				return true;		
			} else if(chkr.opcode(temp)) {
				InstrAddr++;
				opcode = chkr.opcodeBinary;
				immAddr = "000000";
				return true;
			} else {
				i = 0;
				while(i < 1000) {
					if(!temp.compare(LabelTable[i][0])) { //check if the word is an existing label
						//If it is, find its value in the immediates memory
						for(k = 0; ImmTable[k] != atoi(LabelTable[i][1].c_str()); k++) {}
						//Make a PUSH instruction out of it
						chkr.opcode("PUSH");
						opcode = chkr.opcodeBinary;
						itoa(k, buffer, 2); //get immediate addr in binary and extend it
						immAddr = buffer;
						while(immAddr.length() < 6) {
							immAddr.insert(0, "0");
						}
						InstrAddr++;
						return true;
					}
					i++;
				}
				return false;					
			}
		}
	}
}
