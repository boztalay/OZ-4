//Checker class that checks the validity of opcodes, label mnemonics, and number ranges

#include "Checker.h"

Checker::Checker() {
	opcodeTable[0][0] =  "NOP";    opcodeTable[0][1] = "000000";
	opcodeTable[1][0] =  "ADD";    opcodeTable[1][1] = "000001";
	opcodeTable[2][0] =  "SUB";    opcodeTable[2][1] = "000010";
	opcodeTable[3][0] =  "AND";    opcodeTable[3][1] = "000011";
	opcodeTable[4][0] =  "OR";     opcodeTable[4][1] = "000100";
	opcodeTable[5][0] =  "XOR";    opcodeTable[5][1] = "000101";
	opcodeTable[6][0] =  "CP";     opcodeTable[6][1] = "000110";
	opcodeTable[7][0] =  "SL";     opcodeTable[7][1] = "000111";
	opcodeTable[8][0] =  "SR"; 	   opcodeTable[8][1] = "001000";
	opcodeTable[9][0] =  "RL";     opcodeTable[9][1] = "001001";
	opcodeTable[10][0] = "RR";    opcodeTable[10][1] = "001010";
	opcodeTable[11][0] = "FPMUL"; opcodeTable[11][1] = "001011";
	opcodeTable[12][0] = "FPDIV"; opcodeTable[12][1] = "001100";
	opcodeTable[13][0] = "DROP";  opcodeTable[13][1] = "010000";
	opcodeTable[14][0] = "SWAP";  opcodeTable[14][1] = "010001";
	opcodeTable[15][0] = "NROT";  opcodeTable[15][1] = "010010";
	opcodeTable[16][0] = "ROT";   opcodeTable[16][1] = "010011";
	opcodeTable[17][0] = "PUSH";  opcodeTable[17][1] = "010100";
	opcodeTable[18][0] = "DUP";   opcodeTable[18][1] = "010101";
	opcodeTable[19][0] = "NRD";   opcodeTable[19][1] = "010110";
	opcodeTable[20][0] = "RD";    opcodeTable[20][1] = "010111";
	opcodeTable[21][0] = "NRDS";  opcodeTable[21][1] = "011000";
	opcodeTable[22][0] = "RDS";   opcodeTable[22][1] = "011001";
	opcodeTable[23][0] = "OVER";  opcodeTable[23][1] = "011010";
	opcodeTable[24][0] = "JP";    opcodeTable[24][1] = "100000";
	opcodeTable[25][0] = "BRN";   opcodeTable[25][1] = "100001";
	opcodeTable[26][0] = "RET";   opcodeTable[26][1] = "100010";
	opcodeTable[27][0] = "PSHPC"; opcodeTable[27][1] = "100011";
	opcodeTable[28][0] = "RDMEM"; opcodeTable[28][1] = "110000";
	opcodeTable[29][0] = "WRMEM"; opcodeTable[29][1] = "110001";
	opcodeTable[30][0] = "RDPRT"; opcodeTable[20][1] = "110010";
	opcodeTable[31][0] = "WRPRT"; opcodeTable[31][1] = "110011";
	opcodeTable[32][0] = "RDPIN"; opcodeTable[32][1] = "110100";
	opcodeTable[33][0] = "WRPIN"; opcodeTable[33][1] = "110101";
}

bool Checker::opcode(string word) {
	int i = 0;

	for(i = 0; i < 34; i++) {
		if(!word.compare(opcodeTable[i][0])) {
			opcodeBinary = opcodeTable[i][1];
			return true;
		}
	}

	return false;
}

bool Checker::label(string word) {
	return(!word.compare("label"));
}

bool Checker::immediate(string word) {
	int immNum = 0;

	if(word.find_first_not_of("0123456789") == string::npos) {
		immNum = atoi(word.c_str());
		if(immNum > 4294967295) {
			return false;
		} else {
			return true;
		}
	} else {
		immNum = 0;
		return false;
	}
}
