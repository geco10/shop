#include "OnlineShop.h"

void OnlineShop::sell(const Product& a)
{
	std::cout << "i am selling" << a.getName() << "in online shop with this url;" << url<<"with this cost:"<<a.getCost();
}
