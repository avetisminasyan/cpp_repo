#include <iostream>
#include "stack.hpp"
#include <cassert>
node::node(){}
node::node( int value){
    m_data = value;
    m_next = nullptr;
}
//deafult constructor which has no argument and m_first node type pointer equal nullptr 
Stack::Stack()
{
        m_first=nullptr;
}
//assigns values of member variables of one object to member variables of another object
Stack::Stack(const Stack& object)
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
Stack::~Stack()
{
        node* n = m_first;
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
        if (m_first == nullptr)
        {
                return true;
        }
        return false;
}
//Returns the size of the stack
int Stack::size()
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
//print Stack all elements
void Stack::print()
{
        node* n = m_first;
        while (n != nullptr)
        {
                std::cout << n -> m_data << std::endl;
                n = n -> m_next;
        }

}
//Returns the value of the top element on the stack
int Stack::top()
{
	if(m_first == nullptr)
	{
		std::cout<<"Stack is empty"<<std::endl;
		return -1;
	}
	node* n = m_first;
        while(n -> m_next != nullptr)
        {
                 n = n -> m_next;
        }
	return n -> m_data;
}
//Removes the top element from the stack, does not return a value
void Stack::pop()
{
        if (empty())
        {
                return;

        }
        node* n = m_first;
        node* k = m_first;
        while(n -> m_next != nullptr)
        {
               k = n;
               n = n -> m_next;
        }
        delete k -> m_next;
       	k -> m_next = nullptr;
}
//Adds a new elem to the top of the stack
void Stack::push(int value)
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
//delete all elements from Stack
void Stack::del_all()
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
Stack& Stack::operator = (const Stack& object)
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
int& Stack::operator [] (int index)
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
