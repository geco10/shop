#include "SmartPhone.h"

void SmartPhone::work()const {
	std::cout << "working like  mp3,working like calc";
}
SmartPhone::SmartPhone(int energy, int quality, float speed, float cost, const std::string& name)
	:Mp3(quality, name, cost), Calculator(speed, name, cost),Product(name,cost)
{
	charge = energy;
	this->cost = cost;
	this->name = name;
}
