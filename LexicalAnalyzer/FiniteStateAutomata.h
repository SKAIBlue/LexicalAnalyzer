#pragma once
/************************************************************************/
/* Created by Jong Woo Park                                             */
/************************************************************************/
#include <string>
#include <map>
#include <vector>
#include <hash_map>
#include "AutomataState.h"
#include "AutomataCondition.h"


class AutomataState;


class AutomataCondition;


class FiniteStateAutomata 
{
	
public:


	FiniteStateAutomata();



	~FiniteStateAutomata();


	//////////////////////////////////////////////////////////////////////////
	// Get string
	std::string& get();
	


	//////////////////////////////////////////////////////////////////////////
	// Get cursor
	char getCursor();



	//////////////////////////////////////////////////////////////////////////
	// Append charactor to str
	void append();



	//////////////////////////////////////////////////////////////////////////
	// Clear str's string
	void clear();


	//////////////////////////////////////////////////////////////////////////
	// Read and call correct function
	virtual void Read();



	std::string getCursorType();


protected:


	stdext::hash_map<std::string, AutomataState*> states;


	std::vector<AutomataCondition*> conditions;


	std::string str;


	AutomataInput* cursor;



};