#include "Mp3.h"

void Mp3::work()const
{
	std::cout << "i am playing music with this quality:" << quality;
}
Mp3::Mp3(int qual) {
	quality = qual;
}