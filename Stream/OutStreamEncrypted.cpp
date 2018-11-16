#include "OutStreamEncrypted.h"


OutStreamEncrypted::OutStreamEncrypted(int offset)
{
	this->_offset = offset;
}

char * OutStreamEncrypted::Encrypet(char* c) const 
{
	char * result = new char[strlen(c)];
	for (int i = 0; i < strlen(result); i++)
	{
		result[i] = c[i];
		if (result[i] != 32) 
		{
			result[i] = (c[i] + this->_offset) % 126;
		}
	}
	result[strlen(c)] = 0;
	//printf("%d ", (c[i] + this->_offset) % 126);
	return result;

}
OutStream & OutStreamEncrypted::operator<<(char * str)
{
	char * c = Encrypet(str);
	fprintf(this->_file, c);
	return *this;
}

OutStream & OutStreamEncrypted::operator<<(int num)
{
	char n[5];
	sprintf(n, "%d", num);
	char *c = Encrypet(n);
	fprintf(this->_file, "%d", num);
	return *this;
}

OutStream & OutStreamEncrypted::operator<<(void(*pf)(FILE *f))
{
	//call the end line
	pf(this->_file);
	return *this;
}
