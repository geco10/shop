#include "Sausage.h"

void Sausage::work()const
{
	std::cout << "i am this" << taste;
}
Sausage::Sausage(string t) {
	taste = t;
}