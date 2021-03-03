#include "Mlijecni.h"
#include<iostream>
namespace oss {
	ostream& operator<<(ostream& os, Mlijecni& n)
	{
		os << "naziv hrane je: " << n.naziv << " samostalna potrosnja je: " << n.samostalna_potrosnja <<
			" potrosnja kao dio drugog jela je: " << n.potrosnja_dio << endl;
		return os;
	}
	istream& operator>>(istream& is, Mlijecni& n)
	{

		cout << "upisite naziv hrane: " << endl;
		is >> n.naziv;
		cout << "upisite samostalnu potrosnju: " << endl;
		is >> n.samostalna_potrosnja;
		cout << "unesite potrosnju kao dio drugog jela: " << endl;
		is >> n.potrosnja_dio;
		return is;
	}

	Mlijecni::Mlijecni(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik,
		int samostalna_potrosnja, int potrosnja_dio) : Food(v,n,rok,dnevna_kolicina,voda,proteini,masti,ugljik)
	{
		this->naziv = n;
		this->potrosnja_dio = potrosnja_dio;
		this->samostalna_potrosnja = samostalna_potrosnja;
	}
}