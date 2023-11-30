#include "Product.h"

string Product::getName()const
{
	return name;
}
Product::Product(const std::string& name, float cost){
	this->name = name;
	this->cost = cost;
}

float Product::getCost()const
{
	return cost;
}
