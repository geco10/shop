#include "Calculator.h"

void Calculator::work()const 
{
	std::cout << "i am calculating with this speed" << speed;
}
Calculator::Calculator(float f){
	speed = f;
}