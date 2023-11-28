#include "Mp3.h"

void Mp3::work()const
{
	std::cout << "i am playing music with this quality:" << quality;
}
Mp3::Mp3(int qual,std::string name,float cost) {
	quality = qual;
	this->name = name;
	this->cost = cost;
}