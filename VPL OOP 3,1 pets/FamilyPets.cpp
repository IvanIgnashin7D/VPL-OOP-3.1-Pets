#include "FamilyPets.h"
#include <iostream>

FamilyPets::FamilyPets(int maxPets)
{
	maxPets_ = maxPets;
}

void FamilyPets::addPet(std::string type, std::string name, std::string voice, int weight)
{
	pets_.push_back(Pet(type, name, voice, weight));
}

void FamilyPets::names()
{
	for (int i; i < maxPets_; i++)
		std::cout << pets_[i].getname();
}

void FamilyPets::voice()
{
	for (int i; i < maxPets_; i++)
		std::cout << pets_[i].getvoice();
}

int FamilyPets::getNumberRepetitionsName(std::string name)
{
	int res = -1;
	for (int i = 0; i < maxPets_; i++) {
		if (pets_[i].getname() == name)
			res++;
	}
	return res;
}

std::string FamilyPets::findTheEasiest()
{
	std::string easiest;
	int minWeight = pets_[0].getweight();
	std::string res = pets_[0].getname();
	for (int i = 1; i < maxPets_; i++) {
		if (minWeight > pets_[i].getweight()) {
			minWeight = pets_[i].getweight();
			res = pets_[i].getname();
		}
	}
	return res;
}
