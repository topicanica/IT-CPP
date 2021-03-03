#include<iostream>
#include<fstream>
#include<string>
#include "XException.h"
#include "ResultError.h"
#include "NoOperandError.h"
#include "OperatorError.h"
using namespace std;
int UnesiteOperand()
{
	int operand;
	cout << "Unesite operand" << endl;
	cin >> operand;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore();
		throw(NoOperandError());
	}
	else
		return operand;
}
char UnesiteOperator()
{
	char Operator;
	cout << "Unesite operator" << endl;
	cin >> Operator;
	if (Operator == '+' || Operator=='-'|| Operator=='*'|| Operator =='/')
	{
		return Operator;
	}
	else
		throw(OperatorError());
}
int Result(int a, int b, char op)
{
	if (op == '+')
	{
		return a + b;
	}
	else if (op == '-')
	{
		return a - b;
	}
	else if (op == '*')
	{
		return a * b;
	}
	else
	{
		if (b == 0)
			throw(ResultError());

		else
			return a / b;
	}
}
int main()
{
	int a, b;
	char op;
	while (1)
	{
		try 
		{
			a = UnesiteOperand();
			b = UnesiteOperand();
			op = UnesiteOperator();
			cout << Result(a, b, op) << endl;
		}
		catch (XException& other)
		{
			ofstream FILE;
			FILE.open("error", ios::out | ios::app);
			FILE << other.GetException() << endl;
			FILE.close();
			other.PrintException();
		}

	}
}