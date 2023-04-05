#include <iostream>
#include "header.h"

SmartArray::SmartArray()
{
	m_index = 0 ;
	m_size = m_index;
	m_capacity = 3;
	m_array = new int[m_capacity];
}
SmartArray::SmartArray( int el_count )
{	if(el_count > 0 )
	{
		m_size = el_count ;
		m_index = 0 ;
		m_capacity = el_count*2;
		m_array = new int[m_capacity];
	}
	else
	{
		m_index = 0;
		m_size = m_index ;
		m_capacity = 3;
		m_array = new int[m_capacity];
	}
}
SmartArray::~SmartArray()
{
	delete [] m_array;
}
void SmartArray::print()
{
	for( int i = 0; i < m_size; i++ )
	{
		std::cout << m_array[i]<<std::endl;
	}
}
int SmartArray::size()
{
	return this -> m_size;
}
void SmartArray::push_back ( int element )
{
	if ( m_index < m_capacity)
	{
		m_array[ m_index ] = element;
		if(m_size>m_index)
		{
					
			m_index++;
		}
		else
		{
			m_index++;
			m_size++;
		}
	}
	else
	{
		m_capacity = m_capacity*2;
		int* m_array1 = new int[m_capacity];
		for( int i = 0;i < m_size;i++)
		{
			m_array1[i] = m_array[i];
		}
		m_array1[ m_index ] = element;
		m_index++;
		m_size = m_index;
		delete [] m_array;
		m_array = m_array1;
	}
}
int& SmartArray::operator[]( int number )
{
	try
	{
		if( number >= 0 and  number< m_size )
		{
			return m_array[number];
		}
		else
		{
			throw "INDEX out of range";
		}
	}
	catch (const char* str)
        {
                    std::cout<<str<<std::endl;
                    exit(1);
        }
        return m_array[number];
}
void SmartArray::pop_back ()
{
	if(m_size<1)
	{
		std::cout<<"Array is empty"<<std::endl;
		exit(1);
	}
	m_array[m_size-1] = 0;
	m_size--;
	m_index--;
}
