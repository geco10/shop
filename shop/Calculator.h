#pragma once
#include"Product.h"
class Calculator :public virtual Product
{
	float speed;
public:
	Calculator(float s,const std::string& name,float cost);
	void work()const override;
};

