#pragma once
#include"Product.h"
class Mp3:public Product
{
	int quality;
public:
	void work()const override;
	Mp3(int qual);
};

