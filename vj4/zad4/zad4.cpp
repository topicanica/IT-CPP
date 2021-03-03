#include "C:/Users/User/source/repos/vj4/vj4/pozicija.h"
#include "C:/Users/User/source/repos/vj4/zad3/meta.h"
#include "C:/Users/User/source/repos/vj4/zad2/oruzje.h"
#include <iostream>
#include <vector>
using namespace std;
void pogodi_metu(vector<Meta> mete)
{
	Pozicija p;
	int k;
	p.pseudorandom(100, 0);
	cout << "unesite kapacitet vaseg oruzja: \n";
	cin >> k;
	Oruzje pistolj(p, k);
	pistolj.reload();
	pistolj.shoot();
	for (int i = 0; i < mete.size(); i++)
	{
		if (pistolj.pozicija_o() > mete[i].pozicija_m() && pistolj.pozicija_o() < (mete[i].pozicija_m() + 5))
			cout << "vasa meta " << i << "je pogodena";
		cout << "vasa meta nije pogodena \n";
		
	}

}
int main()
{
	int n;
	cout << "upisite koliko zelite stvoriti meta: \n";
	cin >> n;
	vector<Meta> mete;
	for (int i = 0; i < n; i++)
	{
		Pozicija p;
		p.pseudorandom(100, 0);
		Meta nova(p,0);
		mete.push_back(nova);
	}
	pogodi_metu(mete);

}