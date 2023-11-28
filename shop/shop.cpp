
#include <iostream>
#include "Shop.h"
#include"Mp3.h"
#include"Sausage.h"
#include"Calculator.h"
#include"SellCenter.h"
int main()
{

	SellCenter sell;
	sell.addOnlineShop("3871");
	sell.addOfflineShop("maybrook.st 3124");
    sell.selling(Mp3(3,"mp3 hp41",10.10));
}


