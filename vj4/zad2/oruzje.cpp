

#include "oruzje.h"
#include "C:\Users\User\source\repos\vj4\vj4\pozicija.h"

double Oruzje::pozicija_o() const
{
	return p.dohvati_visinu();
}

void Oruzje::shoot()
{
	int i;
	if (stanje_metaka == 0)
		cout << "nemate vise metaka \n";
	cout << "upisite koliko metaka zelite ispucati \n";
	cin >> i;
	do {
		stanje_metaka--;
		i--;
	} while (i != 0);
	
	cout << "uspjesno pucanje \n";
	cout << "trenutno stanje metaka je:" << stanje_metaka << endl;
}

void Oruzje::reload()
{
	if (stanje_metaka == kapacitet)
		cout << "vasa oruzje je puno \n";
	while (stanje_metaka < kapacitet) { 
		stanje_metaka++;
	}
	cout << "uspjesno ste napunili svoje oruzje \n";
}	
