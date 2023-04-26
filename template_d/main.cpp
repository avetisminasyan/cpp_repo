#include "template_d.cpp"
int main()
{
        LinkedList<char> obj;
	//adding elemenet end of the obj
	obj.push_back('a');
	obj.push_back('b');
	//print obj  all elemenents
	//obj.print();
	//adding element beggining of obj
	obj.push_front('e');
	//return obj first element
	std::cout << obj.front() << std::endl;
	//return obj last element
	std::cout << obj.back() << std::endl;
	//print obj all elements
	obj.print();
        return 0;

}

