#include"Torta.h"
namespace oss {
	Torta::Torta(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik,
		int samostalna_potrosnja) : Kolaci(v, n, rok, dnevna_kolicina, voda, proteini, masti, ugljik, samostalna_potrosnja)
	{
	}
}