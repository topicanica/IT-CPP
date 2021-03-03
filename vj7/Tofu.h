#ifndef TOFU_H
#define TOFU_H
#include<iostream>
#include<string>
#include"Vege.h"

namespace oss {
	class Tofu :public Vege
	{
	public:
		Tofu(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik, int samostalna_potrosnja, int potrosnja_prilog);

	};
}
#endif