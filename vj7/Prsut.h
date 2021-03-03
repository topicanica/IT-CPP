#ifndef PRSUT_H
#define PRSUT_H
#include<iostream>
#include<string>
#include"Mesni.h"

namespace oss {
	class Prsut :public Mesni
	{
	public:
		Prsut(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik, int samostalna_potrosnja, int potrosnja_dio);
	};
}
#endif