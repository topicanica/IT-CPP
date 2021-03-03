#ifndef MESO_H
#define MESO_H
#include<iostream>
#include<string>
#include"Mesni.h"

namespace oss {
	class Meso :public Mesni
	{
	public:
		Meso(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik, int samostalna_potrosnja, int potrosnja_dio);
	};
}
#endif