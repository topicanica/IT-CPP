#ifndef MLIJECNI_H
#define MLIJECNI_H

#include<iostream>
#include<string>
#include "Food.h"
namespace oss {
	class Mlijecni : public Food
	{
		protected:
			string naziv;
			int samostalna_potrosnja;
			int potrosnja_dio;

		public:
			Mlijecni(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik,int samostalna_potrosnja,int potrosnja_dio);
			friend ostream& operator<< (ostream& os, Mlijecni& n);
			friend istream& operator>> (istream& is, Mlijecni& n);
	};
}
#endif 
