#include "OnlineShop.h"

OnlineShop::OnlineShop(std::string url) {
	this->url = url;
}

void OnlineShop::selling(const Product& a)const
{
	std::cout << "Example of work:\n  ";
	a.work();
	std::cout << "\nI am selling '" << a.getName() << "' in online shop with this url'" << url << "'\n with this cost '" << a.getCost()<<"'\n";
}
