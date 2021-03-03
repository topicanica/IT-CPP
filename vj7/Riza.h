#ifndef RIZA_H
#define RIZA_H
#include<iostream>
#include<string>
#include"Vege.h"

namespace oss {
	class Riza :public Vege
	{
	public:
		Riza(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik, int samostalna_potrosnja, int potrosnja_prilog);

	};
}
#endif