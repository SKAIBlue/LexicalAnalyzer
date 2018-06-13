#pragma once


class AutomataInput 
{

public:

	virtual bool operator == (void*);

	virtual bool operator = (void*);
	 
	virtual bool operator > (void*);

	virtual bool operator >= (void*);

	virtual bool operator < (void*);

	virtual bool operator <= (void*);

};