#include <iostream>
#include "linked_list.hpp"
//deafult constructor where pointer first equal nullptr
LinkedList::LinkedList()
{
	first=nullptr;
}
//assigns values of member variables of one object to member variables of another object
LinkedList::LinkedList(const LinkedList& object)
{
	node * n = object.first;
	if( n == nullptr )
	{
		first = nullptr;
	}
	else
	{
		node* k = new node;
		k -> data = n -> data;
		k -> next = n -> next;
		first = k;
		node* e = first;
		while (n -> next != nullptr)
		{
			node* k = new node;
			k -> data = n -> next -> data;
			k -> next = n -> next -> next;
			e -> next = k;
			n = n -> next;
			e = e -> next;
		}
	}
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
//cheking is our list element count equal zero
bool LinkedList::is_empty()
{
	if (first == nullptr)
	{
		return true;
	}
	return false;
}
// this function returns list element count
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
//adding element  in end of list
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
		delete k -> next;
		k -> next = nullptr;
	}
}
//if the index is less than m_size index value is equal to the value we gave, we shift the remaining elements one index to the right
void LinkedList::insert(int index,int value)
{
	if(index == 0 and get_size() == 0 )
	{
		node* n = new node;
		n -> data = value;
		n ->next = nullptr;
		first = n;
	}
	else if( index == 0 and index < get_size() )
	{
		node* n = new node;
		n -> data = value;
		n -> next = first;
		first = n;
	}
	else if (index >= 0 and index < get_size())
	{
		node* k = new node;
		k -> data = value;
		node * n = first;
		for ( int i = 0;i < index-1;i++)
		{
			n = n -> next;
		}
		k -> next = n -> next;
		n -> next = k;

	
	}
	else
	{
		std::cout<<"INDEX out of range"<<std::endl;
		exit(1);
	}


}
//deleted given index element from array
void LinkedList::del(int index)
{

	if (index == 0 and index < get_size())
	{
		node* n  = first;
		first = n  -> next;
	}
	else if (index > 0 and (index == get_size() - 1))
	{
		pop_back();
	
	}
	else if (index > 0 and (index < get_size()-1))
	{
		node* n = first;
		node* k = first;
		for (int i = 0;i <index;i++)
		{
			k = n;
			n = n -> next;
		}
		k -> next = n ->next;
	}
	else if (index < 0 or index>=get_size())
	{
		std::cout<<"INDEX out of range"<<std::endl;
		exit(1);
	}
}
//deleted given value from array
void LinkedList::remove(int value)
{
	int ind = -1;
	int c = 0;
	node* n = first;
	while (n != nullptr)
	{
		if( n -> data == value)
		{
			ind = c;
			break;
		}
		c++;
		n = n -> next;

	}
	if (ind != -1)
	{
		del(ind);
	}

}
//assign operator = assigns values of member variables of one object to member variables of another object
LinkedList& LinkedList::operator = (const LinkedList& object)
{
	node * n = object.first;
        if( n == nullptr )
        {
                first = nullptr;
        }
        else
        {
                node* k = new node;
                k -> data = n -> data;
                k -> next = n -> next;
                first = k;
                node* e = first;
                while (n -> next != nullptr)
                {
                        node* k = new node;
                        k -> data = n -> next -> data;
                        k -> next = n -> next -> next;
                        e -> next = k;
                        n = n -> next;
                        e = e -> next;
                }
        }
	return *this;

}
