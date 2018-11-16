#pragma comment(lib,"stream.lib")
#include "OutStream.h"
#include "FileStream.h"
using namespace msl;
	int main()
	{
		OutStream* o = new OutStream();
		*o << "I am the Doctor and I'm ";
		*o << 1500;
		*o << " years old";
		*o << &endline;
		
		FileStream * stream = new FileStream("test.txt");
		(*stream) << "I am the Doctor and I'm ";
		(*stream) << 1500;
		(*stream) << " years old";
		(*stream) << &endline;
		return 0;
	}
