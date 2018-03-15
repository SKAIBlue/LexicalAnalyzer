#pragma once
/************************************************************************/
/* Created by Jong Woo Park                                             */
/************************************************************************/
#include <string>


class FiniteStateAutomata 
{

public:

	std::string& get();

	void append();

	void clear();

private:

	std::string str;

};