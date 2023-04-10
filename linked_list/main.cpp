#include <iostream>
#include "linked_list.hpp"
#include <cassert>
int main ()
{
	LinkedList obj;
	//std::cout<<obj.is_empty()<<std::endl;
	obj.push_back(65);
	obj.push_back(78);
	obj.push_back(18);
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
