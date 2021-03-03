
#include "pch.h"
#include <iostream>
#include <sstream>
#include <iterator>
#include <algorithm>
using namespace std;
void print(int *niz, int &N)
{
	for (int i = 0; i < N; i++)
		cout << niz[i];
}
void function(int *niz, int& N)
{
	bool provjeri[10];
	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (niz[i] == j) { provjeri[j] = true; }
		}
	}
	for (int i = 1; i < 10; i++)
		if (provjeri[i] != true)
		{
			N++;
			niz[N - 1] = i;
		}
	sort(niz, niz + N);

}
int main()
{
	int N;
	cout << "unesite zeljenu velicinu niza" << endl;
	cin >> N;
	int *niz;
	niz = new int[N * 2];
	cout << "unesite zeljene elemente niza " << endl;
	for (int i = 0; i < N; i++)
		cin >> niz[i];
	function(niz, N);
	print(niz, N);
	delete[] niz;
	niz = 0;
}

