#include <iostream>
#include "queue.hpp"
#include <cassert>
int main()
{ 	
	//create Queue type object q
	Queue q;
	//chechking is q size equal 0
	assert(q.size() == 0);
	//chechking q is empty
	assert(q.empty() == true);
	//adding element end of q
	q.push(4);
	//chechking q size equal 1
	assert(q.size() == 1);
	//chechking q is not empty
	assert(q.empty() == false);
	//chechking q first element equal 4
	assert(q.front() == 4);
	//adding element end of q
	q.push(15);
	//chechking q last element equal 15
	assert(q.back() == 15);
	//adding 17 end of q
	q.push(17);
	//delete q first element
	q.pop();
	//chechking if q first element not equal 4
	assert(q.front() != 4);
	return 0;


}
