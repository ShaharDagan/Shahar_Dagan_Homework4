#pragma once
#include <stdio.h>

class OutStream
{
public:
	FILE * _file; //pointer to the file
	OutStream();
	~OutStream();
	OutStream& operator<<(const char *str);//adds string to the file
	OutStream& operator<<(int num);//print number to the file
	OutStream& operator<<(void(*pf)(FILE*f));//call the end line
};

void endline(FILE*);