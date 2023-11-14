#pragma once
#include<iostream>
#include<string>
using std::string;
class Product
{
	int cost;
	string name;
	virtual void work() = 0;
public:
	string getName();
	int getCost();
};

