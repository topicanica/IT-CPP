#ifndef MADJARICA_H
#define MADJARICA_H
#include<iostream>
#include<string>
#include"Kolaci.h"

namespace oss {
	class Madjarica :public Kolaci
	{
	public:
		Madjarica(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik,
			int samostalna_potrosnja);
	};
}
#endif