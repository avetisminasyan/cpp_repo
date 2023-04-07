#include <iostream>
#include "smart_array.hpp"
#include <cassert>
int main()
{
	SmartArray arr;
	arr.push_back(12);
	arr.push_back(13);
	arr.push_back(14);
	arr.insert(1,68);
	//checking arr elements count
	assert(arr.size()==4);
	//cheching arr[1] is equal 68
	assert(arr[1]==68);
	arr.del(1);
	//checking arr[1] is not equal 68
	assert(arr[1]!=68);
	arr.push_back(25);
	arr.push_back(78);
	arr.remove(25);
	//checking arr[3] is not equal 25
	assert(arr[3]!=25);
	arr.push_back(125);
	//checking arr last element is 125
	int size=arr.size();
	assert(arr[size-1]==125);
	arr.pop_back();
	size=arr.size();
	//checking arr last element is not equal 125
	assert(arr[size-1]!=125);
	return 0;
}
