
#include"VideoGame.h"
#include"Counter.h"
#include"Action.h"
#include"DarkSouls.h"
#include"Fallout4.h"
#include"GodOfWar.h"
#include"LastOfUs2.h"
#include"Witcher3.h"
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
	
	Counter c;
	VideoGame* v[] = { new Witcher3, new DarkSouls, new Fallout4, new LastOfUs2, new GodOfWar };
	size_t sz = sizeof v / sizeof v[0];
	for (unsigned i = 0; i < sz; ++i)
		c.add(v[i]);
	std::cout << "Najzastupljenija platforma: " << c.mostFrequentPlatform();
	for (unsigned i = 0; i < sz; ++i)
		delete v[i];

}