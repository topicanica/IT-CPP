#ifndef SUNKA_H
#define SUNKA_H
#include<iostream>
#include<string>
#include"Mesni.h"

namespace oss {
	class Sunka :public Mesni
	{
	public:
		Sunka(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik, int samostalna_potrosnja, int potrosnja_dio);

	};
}
#endif