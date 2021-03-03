
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Producent {
	string Name;
	string Movie;
	int Year;
};
void pretrazi(vector<Producent> niz)
{
	int brojac = 0;
	int index = 0;
	int max = 0;
	for (int i = 0; i < niz.size(); i++)
	{
		for (int j = 1; j < (niz.size() - 1); j++)
		{
			if (niz[i].Name == niz[j].Name)
			{
				brojac++;
				if (brojac > max)
				{ 
					index = i;
					max =brojac;
				}
			}
		}
	}
	printf("%s\n", niz[index].Name.c_str());
}
int main()
{
	vector<Producent> niz;
	int n;
	int i = 0;
	cout << "koliko zelite producenata upisati: ";
	cin >> n;
	while (i!=n) {
		Producent novi;
		cout << "unesite ime producenta  ";
		cin >> novi.Name;
		cout << "unesite ime filma  ";
		cin >> novi.Movie;
		cout << "unesite godinu filma  ";
		cin >> novi.Year;
		niz.push_back(novi);
		i++;
	}
	pretrazi(niz);

}