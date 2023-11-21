#pragma once
#include"Product.h"
#include<iostream>
class IShop
{
public:
	virtual void selling(const Product& a) const= 0;
};

