#pragma once

#include <string>
#include "AutomataCondition.h"


class AutomataCondition;


class Test : public AutomataCondition
{

public:

	virtual std::string operator()(char c);

};