#include <iostream>
#include "linked_list.hpp"
#include <cassert>
int main ()
{
	LinkedList obj;
	assert(obj.is_empty()==true);
	obj.push_back(2);
	obj.push_back(5);
	obj.push_back(78);
	obj.insert(2,15);
	obj.del(2);
	assert(obj.get_size() == 3);
	obj.push_back(16);
	assert(obj.get_size() == 4);
	obj.pop_back();
	assert(obj.get_size() == 3);
	obj.pop_back();
	obj.pop_back();
	obj.pop_back();
	assert(obj.get_size() == 0);
	obj.print();
	return 0;
}
