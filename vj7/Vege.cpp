#include "Vege.h"
namespace oss {
	ostream& operator<<(ostream& os, Vege& n)
	{
		os << "naziv hrane je: " << n.naziv << " samostalna potrosnja je: " << n.samostalna_potrosnja <<
			" potrosnja kao prilog: " << n.potrosnja_prilog << endl;
		return os;
	}
	istream& operator>>(istream& is, Vege& n)
	{
		cout << "upisite naziv hrane: " << endl;
		is >> n.naziv;
		cout << "upisite samostalnu potrosnju: " << endl;
		is >> n.samostalna_potrosnja;
		cout << "unesite potrosnju kao prilog: " << endl;
		is >> n.potrosnja_prilog;
		return is;
	}

	Vege::Vege(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik, int samostalna_potrosnja, 
		int potrosnja_prilog):Food(v,n,rok,dnevna_kolicina,voda,proteini,masti,ugljik)
	{
		this->naziv = n;
		this->samostalna_potrosnja = samostalna_potrosnja;
		this->potrosnja_prilog = potrosnja_prilog;
	}
}