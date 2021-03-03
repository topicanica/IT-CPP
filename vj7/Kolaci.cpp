#include"Kolaci.h"
namespace oss {
	ostream& operator<<(ostream& os, Kolaci& n)
	{
		os << "naziv hrane je: " << n.naziv << " samostalna potrosnja je: " << n.samostalna_potrosnja << endl;
		return os;
	}
	istream& operator>>(istream& is, Kolaci& n)
	{
		cout << "upisite naziv hrane: " << endl;
		is >> n.naziv;
		cout << "upisite samostalnu potrosnju: " << endl;
		is >> n.samostalna_potrosnja;
		return is;
	}

	Kolaci::Kolaci(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik, 
		int samostalna_potrosnja) : Food(v,n,rok,dnevna_kolicina,voda,proteini,masti,ugljik)
	{
		this->naziv = n;
		this->samostalna_potrosnja = samostalna_potrosnja;
	}
}