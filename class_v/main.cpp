#include <iostream>
#include "header.h"
int main()
{
	SmartArray arr(15);
	arr.push_back(12);
	std::cout<<arr[0]<<std::endl;
	std::cout<<arr.size()<<std::endl;
	return 0;
}
