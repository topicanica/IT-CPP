#ifndef OPENWORLD_H
#define OPENWORLD_H

#include<iostream>
#include <string>
#include"VideoGame.h"
using namespace std;

class OpenWorld : virtual public VideoGame
{
	protected:
		vector<string>platform;
		string type;
		
	public:
		OpenWorld();
		string Type();
		void SetPlatform(string str);
		virtual ~OpenWorld() {};
};

#endif
