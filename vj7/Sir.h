#ifndef SIR_H
#define SIR_H
#include<iostream>
#include<string>
#include"Mlijecni.h"

namespace oss {
	class Sir :public Mlijecni
	{
	public:
		Sir(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik, int samostalna_potrosnja, int potrosnja_dio);

	};
}
#endif
