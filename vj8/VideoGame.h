#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include<iostream>
#include<string>
#include<vector>

using namespace std;
class VideoGame
{
	public:
		vector<string>platform;
		VideoGame() {};
		virtual void SetPlatform(string str)=0;
		virtual string Type() = 0;
		virtual ~VideoGame() {};
};
vector<string> citaj(vector<string>& igre);
#endif
