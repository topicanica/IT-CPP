#include "RPG.h"

RPG::RPG()
{
	this->type = "RPG";
}

string RPG::Type()
{
	return type;
}
void RPG::SetPlatform(string str)
{
	this->platform.push_back(str);
}
