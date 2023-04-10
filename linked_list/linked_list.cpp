#include <iostream>
#include "linked_list.hpp"
//deafult constructor where pointer first equal nullptr
LinkedList::LinkedList()
{
	first=nullptr;
}
//distructor with which we delete all dynamic node type elements
LinkedList::~LinkedList()
{
	node* n = first;
	while(n != nullptr)
	{
		node* k = n -> next;
		delete n ;
		n = nullptr;
		n = k;
	}

}
//cheking is out list element count equal zero
bool LinkedList::is_empty()
{
	if (first == nullptr)
	{
		return true;
	}
	return false;
}
// this function returns list elemenet count
int LinkedList::get_size()
{
	node* n = first;
	int c = 0;
	while ( n != nullptr )
	{
		c++;
		n = n -> next;
	}
	return c;
}
//adding elelement in end of list
void LinkedList::push_back(int value)
{
	node* n = first;
	node* k = new node;
	k -> data = value;
	k -> next = nullptr;
	if ( is_empty() )
	{
		first = k;
	}
	else
	{
		while (true)
		{
			if( n ->next == nullptr )
			{
				n->next = k;
				break;
			}
			else
			{
				n = n ->next;
			}
		
		}
	
	}
}
//print list all elements
void LinkedList::print()
{
	node* n = first;
	while ( n != nullptr )
	{
		std::cout<<(*n).data<<std::endl;
		n = n ->next;
	}

}
//deletes list last element
void LinkedList::pop_back()
{
	if( is_empty()  )
	{
		std::cout<<"list is empty"<<std::endl;
		exit(1);
	}
	else if ( get_size() <= 1)
	{
		first = nullptr;
	}
	else
	{
		node* n = first;
		node* k = first;
		while(n ->next != nullptr)
		{
			k = n;
			n = n ->next;
		}
		k -> next = nullptr;
	}
}
