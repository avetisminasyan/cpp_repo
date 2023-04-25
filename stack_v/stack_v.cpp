#include <iostream>
#include "stack_v.hpp"
#include <cassert>
//constructor without argument stack size declared default 0
Stack::Stack()
{
	m_size = 0;
	m_capacity = 3;
	m_array = new int[m_capacity];
}
//assigns values of member variables of one object to member variables of another object
Stack::Stack(const Stack& object)
{
     this -> m_capacity = object.m_capacity;
     this -> m_size = object.m_size;
     this -> m_array = new int[this -> m_capacity];
     for (int i = 0;i < this -> m_size;i++)
     {
     	this -> m_array[i] = object.m_array[i];
     }
}
//destructor deletes  stack
Stack::~Stack()
{
	delete [] m_array;
}
// increases  stack size 2 times
void Stack::change_capacity ()
{
	 	m_capacity = m_capacity*2;
                int* m_array1 = new int[m_capacity];
                for( int i = 0;i < m_size;i++)
                {
                        m_array1[i] = m_array[i];
                }
                delete [] m_array;
                m_array = m_array1;
}
//Returns the size of the stack
int Stack::size()
{
	return m_size;
}
//printing stack all elements
void Stack::print()
{
	for( int i = 0; i < m_size; i++ )
	{
		std::cout << m_array[i] << std::endl;
	}
}
//Returns true if the stack is empty, or false if it is non-empty
bool Stack::empty()
{
	if(m_size == 0)
	{
		return true;
	}
	return false;
}
//Returns the value of the top element on the stack
int Stack::top()
{
	if(m_size > 0)
	{
		return m_array[m_size-1];
	}
	return -1;
}
//Adds a new elem to the top of the stack
void Stack::push(int value)
{
	if (!(m_size < m_capacity))
	{
		change_capacity();
		m_array[m_size] = value;
		m_size++;

	}
	else
	{
		m_array[m_size] = value;
		m_size++;
	}
	

}
//Removes the top element from the stack, does not return a value
void Stack::pop()
{
	assert(!empty() && "Array is empty");
	m_array[m_size-1] = 0;
	m_size--;
}
//assign operator = assigns values of member variables of one object to member variables of another object
Stack& Stack::operator = (const Stack& object)
{
	delete [] this -> m_array;
	this -> m_capacity = object.m_capacity;
	this -> m_size = object.m_size;
	this -> m_array = new int [this -> m_capacity];
	for(int i = 0;i < this -> m_size;i++)
	{
		m_array[i] = object.m_array[i];

	}
	return *this;
}
