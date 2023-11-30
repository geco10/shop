#pragma once
#include"Product.h"
#include"Mp3.h"
#include"Calculator.h"
class SmartPhone:public Calculator,public Mp3{
	int charge;
public:
	void work()const override;
	SmartPhone(int energy, int quality, float speed, float cost, const std::string& namePhone);
};