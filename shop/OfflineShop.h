#pragma once
#include"Product.h"
#include"IShop.h"
#include<string>
class OfflineShop :public IShop
{
	std::string address;
public:
	OfflineShop(std::string address);
	void selling(const Product& a)const override;
};

