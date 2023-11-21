#pragma once
#include"Product.h"
class Calculator :public Product
{
	float speed;
public:
	Calculator(float f);
	void work()const override;
};

