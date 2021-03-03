#include<iostream>
#include"sum.h"
#include "Stack.h"
using namespace std;
template<typename T>
T sum(T x, T y)
{
	T res;
	res = x + y;
	return res;
}
template<>
char sum(char x, char y)
{
	char res;
	res = (int)x + (int)y - 48 ;
	return res;
}
int main()
{
	Sum<int> prvi(5, 5);
	Sum<char> drugi('e', 'f');
	cout << prvi.zbroji() << endl << drugi.zbroji() << endl;

	Stack<int> stack; 
	cout << stack.getSize() << endl;
	
	
	
}
