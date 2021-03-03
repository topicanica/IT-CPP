#pragma once
#ifndef RESULTERROR_H
#define RESULTERROR_H
#include "XException.h"

class ResultError : public XException
{
	void PrintException() { cout << "Dijeljenje s nulom!" << endl; }
	string GetException() { return "Dijeljenje s nulom!"; }

};





#endif 


