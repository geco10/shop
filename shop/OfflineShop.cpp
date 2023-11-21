#include "OfflineShop.h"


void OfflineShop::selling(const Product& a)const
{
	std::cout << "example of work";
	a.work();
	std::cout << "i am selling" << a.getName() << "in online shop with this address;" << address << "with this cost:" << a.getCost();
}
