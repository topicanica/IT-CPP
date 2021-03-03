#include "OpenWorld.h"

OpenWorld::OpenWorld()
{
	this->type = "OpenWorld";
}

string OpenWorld::Type()
{
	return type;
}

void OpenWorld::SetPlatform(string str)
{
	this->platform.push_back(str);
}
