#include <iostream>
#include "linked_list.hpp"
#include <cassert>
int main ()
{
	LinkedList obj;
	//checking obj is empty
	assert(obj.is_empty()==true);
	//adding elements end of list
	obj.push_back(15);
	obj.push_back(17);
	obj.push_back(19);
	obj.push_back(22);
	//cheching is obj element count equal 4
	assert(obj.get_size()==4);
	//delete obj last element and cheching size equal 3
	obj.pop_back();
	assert(obj.get_size()==3);
	//insert 5 in list 0 index
	obj.insert(0,5);
	//cheching is obj 0 index equal 5
	assert(obj[0]==5);
	//delete list 0 index element
	obj.del(0);
	//checking is obj 0 index element is not equal 5
	assert(obj[0] != 5);
	//remove list value 17
	obj.remove(17);
	//cheching is obj 1 index element is not equal 17
	assert(obj[1] != 17);
	//copy constructor
	LinkedList obj1(obj);
	//cheching is obj1 list element count equal obj list element count
	assert(obj1.get_size()==obj.get_size());
	//cheching is obj1 1 index element equal obj 1 index element
	assert(obj1[1]==obj[1]);
	return 0;
}
