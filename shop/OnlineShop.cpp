#include "OnlineShop.h"

void OnlineShop::selling(const Product& a)const
{
	std::cout << "example of work";
	a.work();
	std::cout << "i am selling" << a.getName() << "in online shop with this url;" << url << "with this cost:" << a.getCost();
}
