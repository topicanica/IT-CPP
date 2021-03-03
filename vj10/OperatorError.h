#pragma once
#ifndef OPERATORERROR_H
#define OPERATORERROR_H
#include "XException.h"

class OperatorError : public XException
{
	void PrintException() { cout << "Operator nije tocan!" << endl; }
	string GetException() { return "Operator nije tocan!"; }

};





#endif // 


