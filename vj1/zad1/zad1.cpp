
#include "pch.h"
#include <iostream>
#include <sstream>
using namespace std;

//U nizu od N cijelih brojeva, nalaze se duplikati. Pronadi ih i ispiˇsi koliko puta se
//ponavljaju!Mogu´ce su samo vrijednosti 1 - 9

void duplikati(int *n)
{
	int brojac = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (n[i] == n[j]) {
				brojac++;
				break;
			}
		}
	}
	std::cout << "broj duplikata u nizu je: " << brojac;
}


int main()
{
	int n[10] = { 2, 2, 3,0, 5, 6, 7, 8, 9,3 };
	duplikati(n);
}