#include <iostream>
#include "smartarray.hpp"
#include <cassert>
int main()
{
	SmartArray arr;
	arr.push_back(12);
	arr.push_back(13);
	arr.push_back(14);
	arr.push_back(8);
	arr.push_back(16);
	arr.push_back(15);
	arr.push_back(13);
	arr.push_back(25);
	assert(arr.size()==8);
	arr.pop_back();
	assert(arr.size()==7);
	arr.insert(2,18);
	assert(arr[2]==18);
	arr.del(0);
	assert(arr[0]==13);
	assert(arr.size()==6);
	int els=arr[2];
	arr.remove(8);
	assert(arr[2]!=8);
	SmartArray arr1(arr);
	std::cout<<arr1.size()<<std::endl;
	return 0;
}
