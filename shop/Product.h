#pragma once
#include<iostream>
#include<string>
using std::string;
class Product
{
	int cost;
	string name;
	
public:
	virtual void work() const= 0;
	string getName()const;
	int getCost()const;
};

