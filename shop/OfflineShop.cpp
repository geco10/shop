#include "OfflineShop.h"


void OfflineShop::sell(const Product& a)
{
	std::cout << "i am selling" << a.getName() << "in offline shop with this address;" << address << "with this cost:" << a.getCost();

}
