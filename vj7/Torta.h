#ifndef TORTA_H
#define TORTA_H
#include<iostream>
#include<string>
#include"Kolaci.h"

namespace oss {
	class Torta :public Kolaci
	{
	public:
		Torta(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik,
			int samostalna_potrosnja);
	};
}
#endif
