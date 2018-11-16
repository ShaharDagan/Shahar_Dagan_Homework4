#include "OutStream.h"
using namespace msl;
	OutStream::OutStream()
	{
		this->_file = stdout;
	}

	OutStream::~OutStream()
	{
	}

	OutStream& OutStream::operator<<(const char *str)
	{
		//print string to file
		fprintf(this->_file, str);
		return *this;
	}

	OutStream& OutStream::operator<<(int num)
	{
		//print num to file
		fprintf(this->_file, "%d", num);
		return *this;
	}

	OutStream& OutStream::operator<<(void(*pf)(FILE* f))
	{
		//call the end line
		pf(this->_file);
		return *this;
	}
	void endline(FILE *f)
	{
		//print line to end of file
		fprintf(f, "\n");
	}
