#include "SellCenter.h"

void SellCenter::selling(const Product& a) const
{
	for (IShop *d:data)
	{
		d->selling(a);
	}
}
void SellCenter::addOfflineShop(std::string address) {
	data.push_back(new OfflineShop(address));
}
