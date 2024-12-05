#include <iostream>
#include "FamilyPets.h"
#include "Pet.h"


int main() {
	int maxpets;
	std::cin >> maxpets;
	if ((maxpets < 0) || (maxpets > 7)) {
		std::cout << "ERROR: Incorrect number of pets specified";
		return 1;
	}
	FamilyPets familyPets(maxpets);
	for (int i = 0; i < maxpets; i++) {
		std::string type, name, voice;
		int weight;
		std::cin >> type >> name >> voice >> weight;
		if (type == "<END>")
			break;
		familyPets.addPet(type, name, voice, weight);
	}
}