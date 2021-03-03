#ifndef HUMMUS_H
#define HUMMUS_H
#include<iostream>
#include<string>
#include"Vege.h"

namespace oss {
	class Hummus :public Vege
	{
	public:
		Hummus(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik, int samostalna_potrosnja, int potrosnja_prilog);
	};
}
#endif