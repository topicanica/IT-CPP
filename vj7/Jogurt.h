#ifndef JOGURT_H
#define JOGURT_H
#include<iostream>
#include<string>
#include"Mlijecni.h"

namespace oss {
	class Jogurt :public Mlijecni
	{
	public:
		Jogurt(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik, int samostalna_potrosnja, int potrosnja_dio);
	};
}
#endif