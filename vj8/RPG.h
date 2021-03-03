#ifndef RPG_H
#define RPG_H

#include<iostream>
#include <string>
#include"VideoGame.h"
using namespace std;

class RPG : virtual public VideoGame
{
	protected:
		vector<string>platform;
		string type;

		
	public:
		RPG();
		void SetPlatform(string str);
		string Type();
		virtual ~RPG() {};
};

#endif
