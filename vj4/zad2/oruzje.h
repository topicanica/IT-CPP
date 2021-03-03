
#ifndef ORUZJE_H
#define ORUZJE_H
#include <iostream>
#include "C:\Users\User\source\repos\vj4\vj4\pozicija.h"
using namespace std;

class Oruzje {
	Pozicija p;
	int kapacitet;
	int stanje_metaka;
public:
	Oruzje (Pozicija const poz, int const k) { p = poz; kapacitet = k; stanje_metaka = 0; }
	double pozicija_o() const;
	void shoot();
	void reload();
};

#endif 
