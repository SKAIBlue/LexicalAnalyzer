#include "FiniteStateAutomata.h"

FiniteStateAutomata::FiniteStateAutomata()
{
}

FiniteStateAutomata::~FiniteStateAutomata()
{
}

std::string & FiniteStateAutomata::get()
{
	return str;
}

void FiniteStateAutomata::Read()
{
}

std::string FiniteStateAutomata::getCursorType()
{
	return std::string();
}

char FiniteStateAutomata::getCursor()
{
	return this->cursor;
}

void FiniteStateAutomata::append()
{
	str += cursor;
}

void FiniteStateAutomata::clear()
{
	this->str = "";
}
