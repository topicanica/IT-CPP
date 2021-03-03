#ifndef MESNI_H
#define MESNI_H

#include<iostream>
#include<string>
#include "Food.h"
namespace oss {
	class Mesni : public Food
	{
		protected:
			string naziv;
			int samostalna_potrosnja;
			int potrosnja_dio;
		public:
			Mesni(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik, int samostalna_potrosnja, int potrosnja_dio);
			friend ostream& operator<< (ostream& os, Mesni& n);
			friend istream& operator>> (istream& is, Mesni& n);

	};
}
#endif 
