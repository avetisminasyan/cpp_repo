#include <iostream>
#include "queue.hpp"
#include <cassert>
node::node(){}
node::node( int value){
    m_data = value;
    m_next = nullptr;
}
//deafult constructor which has no argument and m_first node type pointer equal nullptr 
Queue::Queue()
{
        m_first=nullptr;
}
//assigns values of member variables of one object to member variables of another object
Queue::Queue(const Queue& object)
{
	node * n = object.m_first;
        if(n == nullptr)
        {
                m_first = nullptr;
        }
        else
        {
                m_first = nullptr;
                while (n != nullptr)
                {
                        push(n -> m_data);
                        n = n -> m_next;
                }
        }
}
//distructor with which we delete all dynamic node type elements
Queue::~Queue()
{
        node* n = m_first;
        while(n != nullptr)
        {
                node* k = n -> m_next;
                delete n ;
                n = k;
        }
}
//Returns true if the queue is empty, or false if it is non-empty
bool Queue::empty()
{
        if (m_first == nullptr)
        {
                return true;
        }
        return false;
}
//Returns the size of the queue
int Queue::size()
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
//print Queue all elements
void Queue::print()
{
        node* n = m_first;
        while (n != nullptr)
        {
                std::cout << n -> m_data << std::endl;
                n = n -> m_next;
        }
	
}
//Returns the value of the first element in the queu
int Queue::front()
{
	if (m_first != nullptr)
	{
		return m_first -> m_data;
	}
	std::cout<<"Queue is empty"<<std::endl;
	return -1;
}
//Returns the value of the last element in the queue
int Queue::back()
{
	if(!empty())
	{
		node* n = m_first;
		while (n -> m_next != nullptr)
		{
			n = n -> m_next;
		}
		return n -> m_data;
	}
	std::cout<<"Queue is empty"<<std::endl;
	return -1;
}
//Removes the first element from the queue, does not return a value
void Queue::pop()
{
	if (empty())
	{
		return;
	
	}
	node* n  = m_first;
	m_first = n -> m_next;
       	delete	n;
}
//Adds a new element elem to the end of the queue
void Queue::push(int value)
{
	node* n = m_first;
        node* k = new node(value);
	if (empty())
        {
                m_first = k;
        }
        else
        {
                while (n -> m_next != nullptr)
                {
                        n = n -> m_next;
                }
                n -> m_next = k;
        }
}
//delete all elements from Queue
void Queue::del_all()
{
        node* n = m_first;
        while(n != nullptr)
        {
                node* k = n -> m_next;
                delete n ;
                n = k;
        }
        m_first = nullptr;
}
//assign operator = assigns values of member variables of one object to member variables of another object
Queue& Queue::operator = (const Queue& object)
{
        node * n = object.m_first;
        if(n == nullptr)
        {
                m_first = nullptr;
        }
        else
        {

                del_all();
                while (n != nullptr)
                {
                        push(n -> m_data);
                        n = n -> m_next;
                }

        }
        return *this;

}
//assigns our value to the list index
int& Queue::operator [] (int index)
{
        assert(index >= 0 and  index <  size() && "INDEX out of range");
        node* n = m_first;
        if(index >= 0 and index < size())
        {
                for(int i = 0; i<index;i++)
                {
                        n = n -> m_next;
                }
        }
        return n -> m_data;

}
