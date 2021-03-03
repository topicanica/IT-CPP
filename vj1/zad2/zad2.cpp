#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

struct Student {
	int ID;
	string Ime, Spol;
	int Kviz1, Kviz2;
	int MidTerm_score;
	int Final_score;
	int Total_score;
};
int novi_id() {
	static int stari = 0;
	return ++stari;
}
void Dodaj_zapis(Student *studenti)
{
	int ID = novi_id();
	studenti[ID].ID = ID;
	cout << "unesi Ime: "<< endl;
	cin >> studenti[ID].Ime;
	cout << "unesi Spol: " << endl;
	cin >> studenti[ID].Spol;
	cout << "unesi Kviz1: " << endl;
	cin >> studenti[ID].Kviz1;
	cout << "unesi Kviz2: " << endl;
	cin >> studenti[ID].Kviz2;
	cout << "unesi MidTerm score: " << endl;
	cin >> studenti[ID].MidTerm_score;
	cout << "Final score " << endl;
	cin >> studenti[ID].Final_score;
	cout << "Total score: " << endl;
	cin >> studenti[ID].Total_score;
	cout << "Student dodan" << endl;
}
void Obrisi_zapis(Student *studenti)
{
	int ID;
	cout << "Unesite ID studenta kojeg zelite obrisati: " << endl;
	cin >> ID;
	if(studenti[ID].Ime.empty())
		cout << "Student sa unesenim ID-em ne postoji" << endl;
	else {
		studenti[ID].ID = NULL;
		studenti[ID].Ime.clear();
		studenti[ID].Spol.clear();
		studenti[ID].Kviz1 = NULL;
		studenti[ID].Kviz2 = NULL;
		studenti[ID].MidTerm_score = NULL;
		studenti[ID].Final_score = NULL;
		studenti[ID].Total_score = NULL;
		cout << "Student sa unesenim ID-em je izbrisan" << endl;
	}
}
void Azuriraj_zapis(Student *studenti)
{
	int slucaj;
	string azurirani;
	int ID;
	cout << "Unesite ID studenta kojeg zelite azurirati: " << endl;
	cin >> ID;
	cout << "Upisite sto zelite azurirati: 1->Ime 2->Spol 3->Kviz1 4->Kviz2 5->MidTerm_score 6->Final_score 7->Total_score " << endl;
	cin >> slucaj;
	switch (slucaj)
	{
	case 1:
		cout << "Upisite novo ime:" << endl;
		cin >> studenti[ID].Ime;
		break;
	case 2:
		cout << "Upisite novi spol:" << endl;
		cin >> studenti[ID].Spol;
		break;
	case 3:
		cout << "Upisite novi Kviz1" << endl;
		cin >> studenti[ID].Kviz1;
		break;
	case 4:
		cout << "Upisite novi Kviz2" << endl;
		cin >> studenti[ID].Kviz2;
		break;
	case 5:
		cout << "Upisite novi MidTerm_score" << endl;
		cin >> studenti[ID].MidTerm_score;
		break;
	case 6:
		cout << "Upisite novi Final_score" << endl;
		cin >> studenti[ID].Final_score;
		break;
	case 7:
		cout << "Upisite novi Total_score" << endl;
		cin >> studenti[ID].Total_score;
		break;
	default:
		cout << "pogresan unos! Unesite ponovo: " << endl;
		cin >> slucaj;
	}
}
void Prikazi_sve_zapise(Student *studenti, int duljina)
{
	for (int i = 0; i < duljina; i++) {
		if (!studenti[i].Ime.empty()) {
			cout << studenti[i].ID << " " << studenti[i].Ime << " " << studenti[i].Spol << " " << studenti[i].Kviz1 << " " << studenti[i].Kviz2 << " " << studenti[i].MidTerm_score << " " << studenti[i].Final_score << " " << studenti[i].Total_score << endl;
		}
	}
}
void Izracunaj_prosjek_bodova(Student *studenti)
{
	double prosjek;
	int ID;
	cout << "Unesite ID studenta kojem zelite izracunati prosjek bodova: " << endl;
	cin >> ID;
	prosjek = (studenti[ID].Kviz1 + studenti[ID].Kviz2 + studenti[ID].MidTerm_score + studenti[ID].Total_score) / 4.0;
	cout << "Prosjek studenta je: " << prosjek << endl;
}
void Najveci_broj_bodova(Student *studenti,int duljina)
{
	int temp = studenti[0].Total_score;
	int ind;
	for (int i = 1; i < duljina; i++)
	{
		if (!studenti[i].Ime.empty())
		{
			if (studenti[i].Total_score > temp)
				temp = studenti[i].Total_score;
				ind = i;
		}
	}		
	cout << "student " << studenti[ind].Ime << "ima najveci broj bodova: " << temp << endl;
}
void Najmanji_broj_bodova(Student *studenti,int duljina)
{
	int temp = studenti[0].Total_score;
	int ind;
	for (int i = 1; i < duljina; i++)
	{
		if (!studenti[i].Ime.empty())
		{
			if (studenti[i].Total_score > temp)
				temp = studenti[i].Total_score;
				ind = i;
		}
	}
	cout << "student " << studenti[ind].Ime << "ima najmanji broj bodova: " << temp << endl;
}
void Pronadi_po_ID(Student *studenti)
{
	int ID;
	cout << "Unesite ID studenta kojeg zelite pronaci: " << endl;
	cin >> ID;
	if (!studenti[ID].Ime.empty())
		cout << studenti[ID].ID << " " << studenti[ID].Ime << " " << studenti[ID].Spol << " " << studenti[ID].Kviz1 << " " << studenti[ID].Kviz2 << " " << studenti[ID].MidTerm_score << " " << studenti[ID].Total_score << " " << studenti[ID].Final_score << endl;
	else
		cout << "Ne postoji student s unesenim ID-em" << endl;
}

bool Student_compare(Student trenutni, Student sljedeci) {
	return trenutni.Total_score > sljedeci.Total_score;
}

void Sortiraj_studente(Student *studenti, int duljina) {
	sort(studenti, studenti + 20, Student_compare);
	Prikazi_sve_zapise(studenti, duljina);
}

int main()
{
	Student studenti[20] = {NULL};
	int duljina = sizeof(studenti) / sizeof(studenti[0]);

	int odabir;
	do
	{
		cout << "*******************************\n";
		cout << " 1 - Dodaj novi zapis\n" << " 2 - Ukloni zapis\n" << " 3 - Azuriraj zapis\n" << " 4 - Prikazi sve zapise\n"
		<< " 5 -Izracunaj prosjek za studenta\n" << " 6 - Prikazi studenta sa najvise bodova\n" << " 7 - Prikazi studenta sa najmanje bodova\n"
		<< " 8 -Pronadi studenta po ID-u\n" << " 9 -Sortiraj zapise po broju bodova\n" << " 10 -Izlaz\n";
		cout << "*******************************\n";
		cin >> odabir;

		switch (odabir)
		{
		case 1:
			//dodaj zapis
			Dodaj_zapis(studenti);
			break;
		case 2:
			//ukloni zapis
			Obrisi_zapis(studenti);
			break;
		case 3:
			//azuriraj zapise
			Azuriraj_zapis(studenti);
			break;
		case 4:
			//prikazi sve zapise
			Prikazi_sve_zapise(studenti,duljina);
			break;
		case 5:
			//izracunaj prosjek za studenta
			Izracunaj_prosjek_bodova(studenti);
			break;
		case 6:
			//prikazi studenta sa najvise bodova
			Najveci_broj_bodova(studenti,duljina);
			break;
		case 7:
			//prikazi studenta sa najmanje bodova 
			Najmanji_broj_bodova(studenti,duljina);
			break;
		case 8:
			//pronadi studenta
			Pronadi_po_ID(studenti);
			break;
		case 9:
			//sortiraj zapise po broju bodova
			Sortiraj_studente(studenti,duljina);
			break;
		case 10:
			cout << "Izasli ste" << endl;
		default:
			cout << "pogresan unos! Unesite ponovo: " << endl;
			cin >> odabir;
		}
	} while (odabir != 10);

}