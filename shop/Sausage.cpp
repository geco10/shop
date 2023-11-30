#include "Sausage.h"

void Sausage::work()const
{
	std::cout << "i am this" << taste;
}
Sausage::Sausage(string t, const std::string& name, float cost) {
	taste = t;
	this->name = name;
	this->cost = cost;
}