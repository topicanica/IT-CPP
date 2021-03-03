#ifndef VEGE_H
#define VEGE_H

#include<iostream>
#include<string>
#include "Food.h"
namespace oss {
	class Vege : public Food
	{
		protected:
			string naziv;
			int samostalna_potrosnja;
			int potrosnja_prilog;
		public:
			Vege(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik,int samostalna_potrosnja,int potrosnja_prilog);
			friend ostream& operator<< (ostream& os, Vege& n);
			friend istream& operator>> (istream& is, Vege& n);
	};
}
#endif 
