#include "OfflineShop.h"

OfflineShop::OfflineShop(std::string address) {
	this->address = address;
}
void OfflineShop::selling(const Product& a)const
{
	std::cout << "  example of work   ";
	a.work();
	std::cout << "  \ni am selling  " << a.getName() << "\nin online shop with this address;  " << address << "  \nwith this cost:   " << a.getCost();
}
