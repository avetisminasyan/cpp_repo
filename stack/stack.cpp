#include <iostream>
#include "stack.hpp"
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
//deafult constructor which has no argument and m_last node type pointer equal nullptr 
Stack::Stack()
{
        m_last=nullptr;
}
//assigns values of member variables of one object to member variables of another object
Stack::Stack(const Stack& object)
{
        node * n = object.m_last;
        if(n == nullptr)
        {
                m_last = nullptr;
        }
        else
        {
                m_last = nullptr;
                while (n != nullptr)
                {
                        push(n -> m_data);
                        n = n -> m_next;
                }
        }
}
//distructor with which we delete all dynamic node type elements
Stack::~Stack()
{
        node* n = m_last;
        while(n != nullptr)
        {
                node* k = n -> m_next;
                delete n ;
                n = k;
        }
}
//Returns true if the stack is empty, or false if it is non-empty
bool Stack::empty()
{
        if (m_last == nullptr)
        {
                return true;
        }
        return false;
}
//Returns the size of the stack
int Stack::size()
{
        node* n = m_last;
        int c = 0;
        while ( n != nullptr )
        {
                c++;
                n = n -> m_next;
        }
        return c;
}
//print Stack all elements
void Stack::print()
{
        node* n = m_last;
        while (n != nullptr)
        {
                std::cout << n -> m_data << std::endl;
                n = n -> m_next;
        }

}
//Returns the value of the top element on the stack
int Stack::top()
{
	if(m_last == nullptr)
	{
		std::cout<<"Stack is empty"<<std::endl;
		return -1;
	}
	return m_last -> m_data;
}
//Removes the top element from the stack, does not return a value
void Stack::pop()
{
        if (empty())
        {
                return;

        }
	else if(size() == 1)
	{
		m_last = nullptr;
	}
	else
	{
        	node* n = m_last;
		m_last = n -> m_next;
		delete n;
	}
}
//Adds a new elem to the top of the stack
void Stack::push(int value)
{
        node* n = m_last;
        if (empty())
        {
        	node* k = new node(value);
                m_last = k;
        }
        else
        {
		node* k = new node(value,n);
		m_last = k;
        }
}
//delete all elements from Stack
void Stack::del_all()
{
        node* n = m_last;
        while(n != nullptr)
        {
                node* k = n -> m_next;
                delete n ;
                n = k;
        }
        m_last = nullptr;
}
//assign operator = assigns values of member variables of one object to member variables of another object
Stack& Stack::operator = (const Stack& object)
{
        node * n = object.m_last;
        if(n == nullptr)
        {
                m_last = nullptr;
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
int& Stack::operator [] (int index)
{
        assert(index >= 0 and  index <  size() && "INDEX out of range");
        node* n = m_last;
        if(index >= 0 and index < size())
        {
                for(int i = 0; i<index;i++)
                {
                        n = n -> m_next;
                }
        }
        return n -> m_data;

}
