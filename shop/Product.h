#pragma once
#include<iostream>
#include<string>
using std::string;
class Product
{
protected:
	float cost;
	string name;
	
public:
	Product(const std::string& name, float cost);
	virtual void work() const= 0;
	string getName()const;
	float getCost()const;
};

