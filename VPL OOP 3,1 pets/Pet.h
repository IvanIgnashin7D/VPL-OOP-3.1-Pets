#pragma once
#include <string>
class Pet
{
private:
	std::string type_;
	std::string name_;
	std::string voice_;
	int weight_;

public:
	Pet();
	Pet(std::string type, std::string name, std::string voice, int weight);
	std::string gettype() const;
	std::string getname() const;
	std::string getvoice() const;
	int getweight() const;
};

