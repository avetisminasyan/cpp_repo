#include <iostream>
#include "linked_list.hpp"
#include <cassert>
int main ()
{
	LinkedList obj;
	obj.push_back(2);
	obj.push_back(5);
	obj.push_back(3);
	assert(obj.get_size() == 3);
	obj.push_back(16);
	assert(obj.get_size() == 4);
	obj.pop_back();
	assert(obj.get_size() == 3);
	obj.pop_back();
	obj.pop_back();
	obj.pop_back();
	assert(obj.get_size() == 0);
	//obj.print();
	return 0;
}
