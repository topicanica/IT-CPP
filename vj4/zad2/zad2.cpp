

#include "oruzje.h"
#include "C:\Users\User\source\repos\vj4\vj4\pozicija.h"
#include <iostream>
using namespace std;

int main()
{
	Pozicija p;
	p.pseudorandom(100, 0);
	int k, s;
	cout << "unesite zeljeni kapacitet svog oruzja: \n";
	cin >> k;
	Oruzje pistolj(p, k);
	pistolj.reload();
	pistolj.shoot();
	
}
