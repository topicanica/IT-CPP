
#include "pozicija.h"
#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;



int main()
{
	srand(time(NULL));
	Pozicija p;
	Pozicija p2;
	p.postavi();
	p.pseudorandom(100.0,10.0);
	p2.pseudorandom(100.0, 10.0);
	p.izracunaj_2D(p2);
	p.izracunaj_3D(p2);
}