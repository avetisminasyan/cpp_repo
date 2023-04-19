#include <iostream>
#include "stack.hpp"
#include <cassert>
int main()
{
	//create Stack type object s;
	Stack s;
	//chechking s is empty
	assert(s.empty()==true);
	//chechking s size equal 0
	assert(s.size()==0);
	//adding 1 in end of s
	s.push(1);
	//checking s size equal 1
	assert(s.size()==1);
	//chechking s is not empty
	assert(s.empty()==false);
	//adding elements end of s
	s.push(2);
	s.push(3);
	s.push(4);
	//chechking s size equal 4
	assert(s.size() == 4);
	//chechking s top element is 4
	assert(s.top()==4);
	//delete s top element
	s.pop();
	//chechking s top element not equal 4
	assert(s.top() != 4);
	return 0;
}
