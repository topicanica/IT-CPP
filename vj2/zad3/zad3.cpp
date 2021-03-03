#include "pch.h"
#include <iostream>
using namespace std;

struct vector {
	int size,capacity;
	int *niz;
	
	void vector_new(int init)
	{
		size = 0;
		capacity = init;
		niz = new int[init];
	}
	void vector_delete()
	{
		size = 0;
		capacity = 0;
		delete[] niz;
	}
	void vector_size()
	{
		cout << "velicina vektora je:" << size << endl;
	}
	void print_vector()
	{
		if (size == 0)
			cout << "vektor je prazan" << endl;
		for (int i = 0; i < size; i++)
			cout << niz[i] << endl;
	}
	void vector_front()
	{
		if (size == 0)
			cout << "vektor je prazan" << endl;
		cout << niz[0] << endl;
	}
	void vector_back()
	{
		if (size == 0)
			cout << "vektor je prazan" << endl;
		else
			cout << niz[size - 1] << endl;
	}
	void vector_pop_back()
	{
		if (!size == 0) {
			niz[size - 1] = 0;
			size -= 1;
		}
	}
	void vector_push_back(int broj)
	{
		if (size == capacity) {
			int *noviniz = new int[capacity * 2];
			for (int i = 0; i < capacity; ++i) {
				noviniz[i] = niz[i];
			}
			delete[] niz;
			niz = noviniz;
			capacity = capacity * 2;
		}
		niz[size] = broj;
		size += 1;
	}
};



int main()
{
	int init;
	cout << "Unesite kapacitet: ";
	cin >> init;

	vector v;
	v.vector_new(init);
	v.vector_push_back(3);
	v.vector_push_back(7);
	v.print_vector();
	v.vector_front();
	v.vector_back();
	v.vector_size();
	v.vector_pop_back();
	v.print_vector();
	v.vector_delete();
	v.print_vector();
}