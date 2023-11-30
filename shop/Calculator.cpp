#include "Calculator.h"

void Calculator::work()const 
{
	std::cout << "    i am calculating with this speed   " << speed;
}
Calculator::Calculator(float s,const std::string& name,float cost):Product(name,cost) {
	speed = s;
	this->name = name;
	this->cost = cost;
}