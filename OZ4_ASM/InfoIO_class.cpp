//InfoIO class that handles console and log file I/O

#include "InfoIO.h"

InfoIO::InfoIO(string file1, bool al) {
	filestream.open(file1.c_str());
	autolog = al;

	if(!filestream.is_open()) {
		cout << endl << endl << "Problem opening file (InfoIO)\n";
		system("pause");
	}
}

void InfoIO::write_console_line(string msg) {
    cout << msg << endl;
    
    if(autolog) {
		filestream << msg << endl;
	}
}

void InfoIO::write_console(string msg) {
    cout << msg;

	if(autolog) {
		filestream << msg;
	}
}

void InfoIO::write_console_int(int num) {
	cout << num;

	if(autolog) {
		filestream << num;
	}
}

string InfoIO::get_input_str(string prompt, bool prompt_en) {
    string msg;
	
	if(prompt_en) {
		cout << endl << prompt << " ";
	}
    cin >> msg;
     
	return msg;
}

int InfoIO::get_input_int(string prompt, bool prompt_en) {
	int input;

	if (prompt_en) {
		cout << endl << prompt << " ";
	}
	cin >> input;

	return input;
}

void InfoIO::write_log(string msg) {
	filestream << msg;
}

void InfoIO::write_log_line(string msg) {
	filestream << msg << endl; 
}

	
	
