#include <iostream>
#include "smart_array.hpp"
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
	SmartArray arr2{1,2,3,4,5,6,7,8,9};
	std::cout<<arr2.size()<<std::endl;
	arr2.del(3);
	arr2.remove(8);
	std::cout<<"---"<<std::endl;
	arr2.print();
	//std::cout<<arr2[3]<<std::endl;
	//std::cout<<arr2[3]<<std::endl;
	return 0;
}
