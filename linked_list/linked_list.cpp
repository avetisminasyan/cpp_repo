#include <iostream>
#include "linked_list.hpp"
#include <cassert>
node::node(){}
node::node( int value){
    m_data = value;
    m_next = nullptr;
}
node::node(int value,node* next)
{
    m_data = value;
    m_next = next;
	
}
//deafult constructor which has no argument and m_first node type pointer equal nullptr 
LinkedList::LinkedList()
{
	m_first=nullptr;
}
//assigns values of member variables of one object to member variables of another object
LinkedList::LinkedList(const LinkedList& object)
{
	node * n = object.m_first;
	if(n == nullptr)
	{
		m_first = nullptr;
	}
	else
	{
		node* k = new node(n -> m_data,n -> m_next);
		m_first = k;
		node* m_first_p = m_first;
		while (n -> m_next != nullptr)
		{
			node* tmp = new node(n -> m_next ->  m_data,n -> m_next -> m_next);
			m_first_p -> m_next = tmp;
			n = n -> m_next;
			m_first_p = m_first_p -> m_next;
		}	
	}
}
//distructor with which we delete all dynamic node type elements
LinkedList::~LinkedList()
{
	node* n = m_first;
	while(n != nullptr)
	{
		node* k = n -> m_next;
		delete n ;
		n = k;
	}
}
//cheking is our list element count equal zero
bool LinkedList::is_empty()
{
	if (m_first == nullptr)
	{
		return true;
	}
	return false;
}
// this function returns list element count
int LinkedList::get_size()
{
	node* n = m_first;
	int c = 0;
	while ( n != nullptr )
	{
		c++;
		n = n -> m_next;
	}
	return c;
}
//this function takes a number and adds that number to the end of the list
void LinkedList::push_back(int value)
{
	node* n = m_first;
	node* k = new node(value);
	if ( is_empty() )
	{
		m_first = k;
	}
	else
	{
		while (n -> m_next != nullptr)
		{
			n = n -> m_next;	
		}
		n->m_next = k;
	
	}
}
//print list all elements
void LinkedList::print()
{
	node* n = m_first;
	while ( n != nullptr )
	{
		std::cout<<n -> m_data<<std::endl;
		n = n -> m_next;
	}

}
//this function deletes list last element if list is not empty and returns deleted number otherwise -1
int LinkedList::pop_back()
{
	int value = -1;
	if( is_empty()  )
	{
		return value;
	}
	else if ( get_size() == 1)
	{
		value = m_first -> m_data;
		m_first = nullptr;
		return value;
	}
	else
	{
		node* n = m_first;
		node* k = m_first;
		while(n -> m_next != nullptr)
		{
			k = n;
			n = n -> m_next;
		}
		delete k -> m_next;
		k -> m_next = nullptr;
		value = n -> m_data;
	}
	return value;
}
//if the index is less than the m_size index, the value of the m_size index is equal to the value we gave, we move the remaining elements to the right by one index and return 1. otherwise returns -1.
int LinkedList::insert(int index,int value)
{
	if(index < 0 and index >= get_size())
	{
		return -1;
	
	}
	if(index == 0 and get_size() == 0 )
	{
		node* n = new node(value);
		m_first = n;
	}
	else if(index == 0 and index < get_size())
	{
		node* n = new node(value,m_first);
		m_first = n;
	}
	else if (index > 0 and index < get_size())
	{
		node* k = new node(value);
		node * n = m_first;
		for (int i = 0;i < index-1;i++)
		{
			n = n -> m_next;
		}
		k -> m_next = n -> m_next;
		n -> m_next = k;
	}
	return 1;
}
//deletes the corresponding year of the given index from the array and returns the element otherwise -1
int LinkedList::del(int index)
{
	int value = -1;
	if (index < 0 or index >= get_size())
	{
		return value;
	}
	if (index == 0 and index < get_size())
	{
		node* n = m_first;
		m_first = n -> m_next;
		value = n -> m_data;
		delete n;
	}
	else if (index > 0 and (index == get_size() - 1))
	{
		value = pop_back();
	
	}
	else if (index > 0 and (index < get_size()-1))
	{
		node* n = m_first;
		node* k = m_first;
		for (int i = 0;i < index;i++)
		{
			k = n;
			n = n -> m_next;
		}
		value = n -> m_data;
		k -> m_next = n -> m_next;
		delete n;
	}
	return value;
}
//deleted given value from array
void LinkedList::remove(int value)
{
	int ind = -1;
	int c = 0;
	node* n = m_first;
	while (n != nullptr)
	{
		if(n -> m_data == value)
		{
			ind = c;
			break;
		}
		c++;
		n = n -> m_next;

	}
	if (ind != -1)
	{
		del(ind);
	}
}
//assign operator = assigns values of member variables of one object to member variables of another object
LinkedList& LinkedList::operator = (const LinkedList& object)
{
	node * n = object.m_first;
        if(n == nullptr)
        {
                m_first = nullptr;
        }
        else
        {
		this ->~LinkedList();
		node* k = new node(n -> m_data,n -> m_next);
                m_first = k;
                node* m_first_p = m_first;
                while (n -> m_next != nullptr)
                {
                        node* tmp = new node(n -> m_next -> m_data,n -> m_next -> m_next);
			m_first_p -> m_next = tmp;
                        n = n -> m_next;
                        m_first_p = m_first_p -> m_next;
                }
        }
	return *this;

}
//assigns our value to the list index
int& LinkedList::operator [] (int index)
{	
	node* n = m_first;
	if(index >0 and index < get_size())
	{
		for(int i = 0; i<index;i++)
		{
			n = n -> m_next;
		}
	}
	return n -> m_data;
	
}
