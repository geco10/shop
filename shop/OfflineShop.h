#pragma once
#include"Product.h"
#include"IShop.h"
#include<string>
class OfflineShop :public IShop
{
	std::string address;
public:
	void sell(const Product& a);
};

