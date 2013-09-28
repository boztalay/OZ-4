//InfoIO class that handles console and log file I/O

#ifndef INFOIO_H
#define INFOIO_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class InfoIO {
    public:
		ofstream filestream;
	    bool autolog;
	
		InfoIO(string, bool);
	      
	    void write_console_line(string);
	    void write_console(string);
		void write_console_int(int);
	    string get_input_str(string, bool);
	    int get_input_int(string, bool);
	
	    void write_log(string);
		void write_log_line(string);
};

#endif
