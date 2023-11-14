#pragma once
#include"Product.h"
#include<iostream>
class IShop
{
public:
	virtual void sell(Product a) = 0;
};

