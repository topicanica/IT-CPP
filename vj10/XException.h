#ifndef XEXCEPTION_H
#define XEXCEPTION_H
#include<iostream>
#include<string>
using namespace std;

class XException
{
public:
	virtual void PrintException() = 0;
	virtual string GetException() = 0;

};


#endif // !XEXCEPTION_H


