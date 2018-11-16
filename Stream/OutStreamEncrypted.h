#include "OutStream.h"
#include <string.h>
class OutStreamEncrypted :public OutStream {
private:
	int _offset;
	
public:
	OutStreamEncrypted(int offset);//set the offset property
	OutStream & operator<<(char *str);//adds string to the file
	OutStream&	operator<<(int num);//print number to the file
	OutStream& operator<<(void(*pf)(FILE*f));//call the end line
	char* Encrypet(char*)const ;
};