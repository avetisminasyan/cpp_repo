#include "template_d.cpp"
int main()
{
        LinkedList<char> obj;
	//adding element end of the obj
	obj.push_back('a');
	obj.push_back('b');
	//adding element beggining of the obj
	obj.push_front('f');
	//insert 'e' in obj 1 index
	obj.insert(1,'e');
	//print all elements
	//obj.print();
	//delete obj last element
	obj.pop_back();
	//print all elements
	//obj.print();
	obj.pop_front();
	//print all elements
	//obj.print();
	obj.push_back('k');
	//chechking if obj 2 index equal 'k'
	assert(obj[2] == 'k');
	//print all elements
	obj.print();
	//reverse obj elements
	obj.reverse();
	assert(obj[0] == 'k');
        return 0;

}

