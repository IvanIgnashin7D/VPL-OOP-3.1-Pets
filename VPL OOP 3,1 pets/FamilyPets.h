#pragma once
#include <vector>
#include "Pet.h"
#include <iostream>
class FamilyPets
{
private:
	std::vector<Pet> pets_;
	int maxPets_;

public:
	FamilyPets(int maxPets);
	const std::vector<Pet>& getPets() const;
	void addPet(std::string type, std::string name, std::string voice, int weight);
	void names();
	void voice();
	int getNumberRepetitionsName(std::string name);
	std::string findTheEasiest();
	friend std::ostream& operator<<(std::ostream& stream, const FamilyPets& familyPets);
};

