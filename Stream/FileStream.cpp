#include "FileStream.h"

FileStream::FileStream(char * path) 
{
	//open the file with append premission
	this->_file = fopen(path, "a+");
	if (this->_file == NULL)
	{
		fclose(this->_file);
	}
}\

FileStream::~FileStream() 
{
	//close the file
	fclose(this->_file);
}