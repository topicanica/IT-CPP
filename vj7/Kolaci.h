#ifndef KOLACI_H
#define KOLACI_H

#include<iostream>
#include<string>
#include "Food.h"
namespace oss {

	class Kolaci : public Food
	{
	protected:
		string naziv;
		int samostalna_potrosnja;
	public:
		Kolaci(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik, int samostalna_potrosnja);
		friend ostream& operator<< (ostream& os, Kolaci& n);
		friend istream& operator>> (istream& is, Kolaci& n);

	};
}
#endif