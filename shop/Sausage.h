#pragma once
#include"Product.h"
class Sausage :public Product
{
	string taste;
public:
	void work()const override;
	Sausage(string t, const std::string& name, float cost);
};

