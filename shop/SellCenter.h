#pragma once
#include"Product.h"
#include"IShop.h"
#include<iostream>
#include<vector>
#include"OfflineShop.h"
#include"OnlineShop.h"

using std::vector;
class SellCenter
{
	vector<IShop*> data;
public:
	void addOnlineShop(std::string url);
	void addOfflineShop(std::string address);
	virtual void selling(const Product& a) const;
};

