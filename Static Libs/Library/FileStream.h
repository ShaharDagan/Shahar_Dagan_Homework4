#include "OutStream.h"
namespace msl {
	class FileStream : public OutStream
	{
	public:
		FileStream(char*path);//The constructor - initalize and open the file 
		~FileStream(); //close the file
	};
}