#include "pch.h"
#include <iostream>
using namespace std;

void print(int niz[], int duljina)
{
	for (int i = 0; i < duljina; i++) {
		cout << niz[i] << endl;
	}
}
int& pronadi(int *niz,int duljina)
{
	int broj[4];
	for (int i = 0; i < duljina; i++)
	{
		int zapamti = niz[i];
		int j = 3;
		while (niz[i] > 0)
		{
			int znamenka = niz[i] % 10;
			broj[j] = znamenka;
			j--;
			niz[i] = niz[i] / 10;
		}
		if (broj[0] + broj[2] == 5)
		{
			niz[i] = zapamti;
			return niz[i];
		}

	}
}

int main()
{
	int niz[] = { 2032,4852,2103,2500 };
	int duljina = sizeof(niz) / sizeof(int);
	pronadi(niz,duljina) += 1;
	print(niz,duljina);
}