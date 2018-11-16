#include "Logger.h"
unsigned int Logger::_counter = 0;

Logger::Logger()
{
	this->_startLine = true;
	OutStream os;
}

Logger::~Logger()
{
}
void Logger::setStartLine(bool start)
{
	if (start) 
	{
		_counter++;
	}
	this->_startLine = start;
}

Logger & operator<<(Logger & l, const char * msg)
{
	if (l._startLine)
	{
		fprintf(stdout, "LOG %d %s", Logger::_counter, msg);
		l.setStartLine(false);
	}
	else 
	{
		fprintf(stdout, " %s", msg);
	}
	return l;
}

Logger & operator<<(Logger & l, int num)
{
	if (l._startLine)
	{
		fprintf(stdout, "LOG %d %d", Logger::_counter, num);
	}
	else
	{
		fprintf(stdout, " %d", num);
	}
	return l;
}

Logger & operator<<(Logger & l, void(*pf)(FILE*))
{
	pf(stdout);
	return l;
}

