#include "Test.h"

std::string Test::operator()(char c)
{
	if(c >= '0' && c <= '9')
		return "NUM";
}
