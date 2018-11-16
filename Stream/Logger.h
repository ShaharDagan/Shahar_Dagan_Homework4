#pragma once

#include "OutStream.h"
#include <stdio.h>

class Logger
{
	
public:
	OutStream os;
	bool _startLine; //beginning of line?
	static unsigned int _counter;//count the lines 
	void setStartLine(bool start); //set value to the property _startLine
	Logger();//Constructor
	~Logger();//Destructor 
	//A friend function of a class is defined outside that class' scope 
	//but it has the right to access all private and protected members of the class.
	friend Logger& operator<<(Logger& l, const char *msg);//funnction to print msg 
	friend Logger& operator<<(Logger& l, int num);//functon to print num
	friend Logger& operator<<(Logger& l, void(*pf)(FILE*));//fucntion to call the recived function address
};
