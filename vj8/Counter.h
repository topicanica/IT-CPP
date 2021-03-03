#ifndef COUNTER_H
#define COUNTER_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;
#include"VideoGame.h"

class Counter
{
protected:
	int PC;
	int XBOX;
	int PS4;
	vector<VideoGame*> niz;
public:
	Counter();
	string mostFrequentPlatform();
	void add(VideoGame *igra);
};
#endif // !COUNTER_H
