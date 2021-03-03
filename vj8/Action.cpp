#include "Action.h"


Action::Action()
{
	this->type = "Action";
}

string Action::Type()
{
	return type;
}
void Action::SetPlatform(string str)
{
	this->platform.push_back(str);
}
