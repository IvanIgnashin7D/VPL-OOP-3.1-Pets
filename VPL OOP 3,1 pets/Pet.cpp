#include "Pet.h"

Pet::Pet(std::string type, std::string name, std::string voice, int weight)
{
	type_ = type;
	name_ = name;
	voice_ = voice;
	weight_ = weight;
}

std::string Pet::gettype()
{
	return type_;
}

std::string Pet::getname()
{
	return name_;
}

std::string Pet::getvoice()
{
	return voice_;
}

int Pet::getweight()
{
	return weight_;
}
