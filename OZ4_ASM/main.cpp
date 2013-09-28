#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

#include "InfoIO.h"
#include "Checker.h"
#include "LabelImm.h"
#include "InstructionGrab.h"
#include "Output.h"

using namespace std;

int main(int argc, char* argv[])
{

	if(argc != 4) {
		cout << "You're doing it wrong.\n\n";
		system("pause");
		return 0;
	}

	InfoIO infostream("log.txt", true);
	LabelImm labelsimms(argv[1]);
	InstructionGrab instr(argv[1]);
	Output output(argv[2], argv[3]);
	Checker chkr();

	int label_imm = 0;	

	infostream.write_console_line("------------------------");
	infostream.write_console_line("-- OZ-4 ASM assembler --");
	infostream.write_console_line("------------------------");

	labelsimms.ImmTable[0] = 0;
	labelsimms.CurrImm++;

	infostream.write_console_line("\n\nBeginning first pass..."); 
	while(labelsimms.getLine().find_first_of("%") == string::npos) {
		label_imm = labelsimms.getLabelImm();
		if(label_imm == 2) {	
			infostream.write_console("\n\nLabel found: ");		
			infostream.write_console_line(labelsimms.LabelTable[labelsimms.CurrLabel-1][0]);
			infostream.write_console("Address: ");		
			infostream.write_console_line(labelsimms.LabelTable[labelsimms.CurrLabel-1][1]);
			infostream.write_console("Line: ");
			infostream.write_console_int(labelsimms.CurrLine);
			infostream.write_console("\nImmMem Addr: ");
			infostream.write_console_int((labelsimms.CurrImm - 1));
		} else if(label_imm == 1) {
			if(labelsimms.CurrImm > 63) {
				infostream.write_console_line("\n\nERROR: Max immediates hit");
				labelsimms.CurrImm--;
			} else {
				infostream.write_console("\n\nImmediate found: ");
				infostream.write_console_int(labelsimms.ImmTable[labelsimms.CurrImm - 1]);
				infostream.write_console("\nAddress: ");		
				infostream.write_console_int(labelsimms.CurrImm - 1);
			}
		}
	}

	infostream.write_console_line("\n\nFirst pass complete.");
	
	infostream.write_console_line("\nWriting file headers...");
	output.writeHeader();

	infostream.write_console_line("\nWriting immediate memory...");
	for(int i = 1; i < labelsimms.CurrImm; i++) {
		output.writeImm(labelsimms.ImmTable[i], i);
	}

	infostream.write_console("\nBeginning second pass...");

	//Copy over the immediate and label tables
	memcpy(instr.ImmTable, labelsimms.ImmTable, sizeof(instr.ImmTable));
	memcpy(instr.LabelTable, labelsimms.LabelTable, sizeof(instr.LabelTable));

	while(instr.getLine().find_first_of("%") == string::npos) {
		if(instr.getOpcode()) {
			output.opcode = instr.opcode;
			output.immAddr = instr.immAddr;
			output.instrAddr = instr.InstrAddr;
			output.writeInstr();
			infostream.write_console_line("\n\nFound Instruction:");
			infostream.write_console("Opcode: ");
			infostream.write_console_line(output.opcode);
			infostream.write_console("ImmAddr: ");
			infostream.write_console_line(output.immAddr);
			infostream.write_console("Addr: ");
			infostream.write_console_int(output.instrAddr);
			infostream.write_console("\nLine: ");
			infostream.write_console_int(instr.CurrLine);
		} else if((instr.line[0] != '\0') && (instr.temp[0] != '#') && (instr.temp != "label") && instr.line[instr.line.find_first_not_of(" \t")] != string::npos) {
			infostream.write_console_line("\n\n--------------ERROR--------------");
			infostream.write_console("Instruction not found. Line ");
			infostream.write_console_int(instr.CurrLine);
			infostream.write_console_line("\n--------------ERROR--------------");
			infostream.write_console("\n\n");
			system("pause");
			return 0;
		}
	}

	infostream.write_console_line("\n\nComplete! Make sure you weren't stupid, because I was too lazy to make real error catching!");

	output.writeEnd();

	infostream.write_console("\n\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}
