#include "FamilyPets.h"
#include <iostream>
#include <vector>
#include "Pet.h"

FamilyPets::FamilyPets(int maxPets)
{
	maxPets_ = maxPets;
}

const std::vector<Pet>& FamilyPets::getPets() const
{
	return pets_;
}

void FamilyPets::addPet(std::string type, std::string name, std::string voice, int weight)
{
	pets_.push_back(Pet(type, name, voice, weight));
}

void FamilyPets::names()
{
	for (int i = 0; i < maxPets_; i++)
		std::cout << pets_[i].getname() << ' ';
}

void FamilyPets::voice()
{
	for (int i = 0; i < maxPets_; i++)
		std::cout << pets_[i].getvoice() << ' ';
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

std::ostream& operator<<(std::ostream& stream, const FamilyPets& familyPets) {
	for (int i = 0; i < familyPets.getPets().size(); i++) {
		stream << familyPets.getPets()[i].gettype() << ' ';
		stream << familyPets.getPets()[i].getname() << ' ';
		stream << familyPets.getPets()[i].getvoice() << ' ';
		stream << familyPets.getPets()[i].getweight() << '\n';
	}
	return stream;
}
