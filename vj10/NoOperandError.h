#pragma once
#ifndef NOOPERANDERROR_H
#define NOOPERANDERROR_H
#include "XException.h"

class NoOperandError : public XException
{
	void PrintException() { cout << "Operand nije unesen!" << endl; }
	string GetException() { return "Operand nije unesen!"; }


};


#endif 


