#include "pch.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <time.h>
using namespace std;

void print(vector<int> v)
{
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); ++it)
		cout << *it << " ";
}
vector<int> unos(const int a, const int b, bool odluka, int n)
{
	vector<int> v;
	int i = 0, x;
	while (i < n)
	{
		cout << "unesite zelite li unijeti zeljeni broj:(1-da,0-ne)";
		cin >> odluka;
		if (odluka == 1)
		{
			cout << "unesite zeljeni broj za unijeti";
			cin >> x;
			v.push_back(x);
		}
		else
		{
			x = ((rand() % (int)(((b)+1) - (a))) + (a));
			v.push_back(x);
		}
		i++;
	}

	return v;
}

int main()
{
	srand(time(NULL));
	bool odluka = 0;
	vector<int>v = unos(0, 100, odluka, 5);
	print(v);

}