#include "Mesni.h"
namespace oss {
	ostream& operator<<(ostream& os, Mesni& n)
	{
		os << "naziv hrane je: " << n.naziv << " samostalna potrosnja je: " << n.samostalna_potrosnja <<
			" potrosnja kao dio drugog jela je: " << n.potrosnja_dio << endl;
		return os;
	}
	istream& operator>>(istream& is, Mesni& n)
	{
		cout << "upisite naziv hrane: " << endl;
		is >> n.naziv;
		cout << "upisite samostalnu potrosnju: " << endl;
		is >> n.samostalna_potrosnja;
		cout << "unesite potrosnju kao dio drugog jela: " << endl;
		is >> n.potrosnja_dio;
		return is;
	}

	Mesni::Mesni(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik,
		int samostalna_potrosnja, int potrosnja_dio):Food(v, n, rok, dnevna_kolicina, voda, proteini, masti, ugljik)
	{
		this->naziv = n;
		this->samostalna_potrosnja = samostalna_potrosnja;
		this->potrosnja_dio = potrosnja_dio;
	}
}