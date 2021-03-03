#ifndef META_H
#define META_H

#include <iostream>
#include "C:\Users\User\source\repos\vj4\vj4\pozicija.h"
using namespace std;

class Meta {
	Pozicija p;
	bool pogoden;
public:
	Meta() { ; }
	Meta(Pozicija const poz, bool pog) { p = poz; pogoden = pog; } 
	double pozicija_m() const;
};

#endif

