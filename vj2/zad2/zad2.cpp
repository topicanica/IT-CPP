#include "pch.h"
#include <iostream>
#include <sstream>
#include <iterator>
#include <algorithm>
using namespace std;

void print(int *niz, int N)
{
	for (int i = 0; i < N; i++)
		cout << niz[i];
}
void rasporedi(int *niz, int N)
{
	int j = -1;
	for (int i = 0; i < N; i++)
	{
		if (niz[i] % 2 == 0)
		{
			j++;
			swap(niz[i], niz[j]);
		}
	}
	print(niz, N);
}
int main()
{
	int *niz;
	int N;
	cout << "unesite zeljenu velicinu niza" << endl;
	cin >> N;
	niz = new int[N];
	cout << "unesite zeljene elemente niza" << endl;
	for (int i = 0; i < N; i++)
		cin >> niz[i];
	rasporedi(niz, N);
	delete[] niz;
}