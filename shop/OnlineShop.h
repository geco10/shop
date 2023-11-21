#pragma once
#include"Product.h"
#include"IShop.h"
#include<string>
class OnlineShop:public IShop
{
	std::string url;
public:
	void selling(const Product& a)const override;
};

