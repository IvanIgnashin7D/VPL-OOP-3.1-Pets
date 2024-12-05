#pragma once
#include <vector>
#include "Pet.h"
class FamilyPets
{
private:
	std::vector<Pet> pets_;
	int maxPets_;

public:
	FamilyPets();
	FamilyPets(int maxPets);
	void addPet(std::string type, std::string name, std::string voice, int weight);
	void names();
	void voice();
	int getNumberRepetitionsName(std::string name);
	std::string findTheEasiest();
};

