#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

template <typename T>
class Stack
{
	private:
		const int DefaultSize = 10;
		const int MaxSize = 1000;
		int size;
		int top;
		T* stackPtr;
public:
	Stack() {
		this->size = DefaultSize;
		top = -1;
		stackPtr = new T[size];
	};
	Stack(int size) {
		if (size > MaxSize)
		{
			cout << "Stack max je 1000" << endl;
			this->size = MaxSize;
		}
		else { this->size = size; }
		top = -1;
		stackPtr = new T[size];
	};
	~Stack() {
		delete[] stackPtr;
		cout << "Stack uspjesno unisten" << endl;
	};
	int getSize() { return size; };
	int getTop() { return top; };

	bool stackFull() {
		if (size - 1 == top);
			return true;
	};
	bool stackEmpty() {
		if (top == -1)
			return true;
	};
	void push(T element) {
		if (stackFull())
		{ 
			cout << "Stack pun, ne mozemo dodati element" << endl;
			return; 
		}
		stackPtr[++top] = element;
	};
	T pop() {
		if (stackEmpty())
		{
			cout << "Stack prazan, ne mozemo obrisati elemente" << endl;
			return 0; 
		}
		return stackPtr[top--];
	};
};




#endif // !1

