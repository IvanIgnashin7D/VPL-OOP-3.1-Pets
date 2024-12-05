#include "Pet.h"

Pet::Pet(std::string type, std::string name, std::string voice, int weight)
{
	type_ = type;
	name_ = name;
	voice_ = voice;
	weight_ = weight;
}

std::string Pet::gettype() const
{
	return type_;
}

std::string Pet::getname() const 
{
	return name_;
}

std::string Pet::getvoice() const 
{
	return voice_;
}

int Pet::getweight() const
{
	return weight_;
}
