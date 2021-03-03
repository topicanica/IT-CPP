

#ifndef POLOZAJ_H
#define POLOZAJ_H
#include <iostream>
using namespace std;
class Pozicija {
	double d, s, v;
public:
	void postavi();
	void pseudorandom(const double max, const double min);
	double dohvati_duzinu() const;
	double dohvati_sirinu() const;
	double dohvati_visinu() const;
	void izracunaj_2D(Pozicija const p2);
	void izracunaj_3D(Pozicija const p2);
	void print_p() const;
};

#endif
