#ifndef KREMPITA_H
#define KREMPITA_H
#include<iostream>
#include<string>
#include"Kolaci.h"

namespace oss {
	class Krempita :public Kolaci
	{
	public:
		Krempita(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik,
			int samostalna_potrosnja);
	};
}
#endif