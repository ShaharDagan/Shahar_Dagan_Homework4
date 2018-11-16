#include <iostream>
#include "FileStream.h"
#include "OutStreamEncrypted.h"
#include "Logger.h"
int main(int argc, char **argv)
{
	
	//*o <<&PrintTheString;
	//*o << &endline;
	FileStream * stream = new FileStream("test.txt");
	(*stream) << "I am the Doctor and I'm ";
	(*stream) << 1500;
	(*stream) << " years old";
	(*stream) << &endline;
	OutStreamEncrypted * streamEncrypted = new OutStreamEncrypted(4);
	(*streamEncrypted) << "I am the Doctor and Im";
	(*streamEncrypted) << 1500;
	(*streamEncrypted) << " years old";
	printf("\n");
	Logger* log = new Logger();
	(*log)<<"This is log 1";
	//(*log) << &endline;
	(*log)<<"This is log 1";
	(*log)<<"This is log 1";

	Logger* log2 = new Logger();
	(*log2)<<"This is log2 ";
	(*log2)<<"This is log2 ";
	(*log2).setStartLine(true);
	(*log2) << "test";
	system("pause");
	return 0;
}
