#include "pch.h"
#include "MojeFunkcije.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

void formiraj(vector<int> v1, vector<int> v2)
{
	int lijevi = 0;
	int desni = v1.size();
	vector<int>novi;
	for (int i = 0; i < v1.size(); i++)
	{
		if(binary_search(v2.begin(),v2.end(),v1.at(i)))
			continue;
		novi.push_back(v1.at(i));

	}
	print(novi);
}
int main()
{
	srand(time(NULL));
	vector<int> v1 = unos(0, 100, 0, 5);
	vector<int> v2 = unos(0, 100, 0, 5);
	sort(v1.begin(), v1.end()); 
	sort(v2.begin(), v2.end()); 
	print(v1);
	print(v2);
	formiraj(v1, v2);
}