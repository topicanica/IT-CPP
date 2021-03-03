#ifndef ACTION_H
#define ACTION_H

#include<iostream>
#include <string>
#include"VideoGame.h"
using namespace std;

class Action : virtual public VideoGame
{
	protected:
		vector<string>platform;
		string type;
		
	public:
		Action();
		string Type();
		void SetPlatform(string str);
		virtual ~Action() {};
};

#endif
