#ifndef SUM_H
#define SUM_H
#include<iostream>
using namespace std;
template <typename T>
class Sum
{
private:
	T a, b;
public:
	Sum(T a,T b) { cout << "basic konstruktor\n"; this->a = a; this->b = b;};
	T zbroji() { return a + b; }
};
template<>
class Sum<char>
{
	private:
		char a, b;
	public:
		Sum(char a, char b) { cout << "char konstruktor\n"; this->a = a; this->b = b; }
		char zbroji() { return a + b - 'a' + 1; };
};
#endif // !SUM_H
