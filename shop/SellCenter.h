#pragma once
#include"Product.h"
#include"IShop.h"
#include<iostream>
#include<vector>
using std::vector;
class SellCenter
{
	vector<IShop> data;
public:
	virtual void sell(Product a) ;
};

