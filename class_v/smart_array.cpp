#include <iostream>
#include "smart_array.hpp"
//constructor without argument array size declared default 0
SmartArray::SmartArray()
{
	m_size = 0;
	m_capacity = 3;
	m_array = new int[m_capacity];
}
// constructor with argument where array element count  is equal argument
SmartArray::SmartArray(int el_count)
{	if(el_count > 0)
	{
		m_size = el_count ;
		m_capacity = el_count*2;
		m_array = new int[m_capacity];
	}
	else
	{
		std::cout << "array elements count  must be greater than 0" << std::endl;
		exit(1);
	}
}
//constructor takes a list as an argument
SmartArray::SmartArray(const std::initializer_list<int> &list):
	SmartArray(list.size())
	{
		int count = 0;
		for (auto &element : list)
		{
			++count;
		}
		m_size = count;
		m_capacity = m_size*2;
		m_array = new int [m_capacity];
		count = 0;
		for (auto &element : list)
		{
			m_array[count] = element;
			++count;
		}
	}
//assigns values of member variables of one object to member variables of another object
SmartArray::SmartArray(const SmartArray& object)
{
	this -> m_capacity = object.m_capacity;
	this -> m_size = object.m_size;
	this -> m_array = new int[this -> m_capacity];
	for (int i = 0;i < this -> m_size;i++)
	{
		this -> m_array[i] = object.m_array[i];
	}
}
//destructor deletes dynamically array 
SmartArray::~SmartArray()
{
	delete [] m_array;
}
// increases dynamic array size 2 times
void SmartArray::change_capacity ()
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
//printing array all elements
void SmartArray::print()
{
	for( int i = 0; i < m_size; i++ )
	{
		std::cout << m_array[i] << std::endl;
	}
}
//returns array elements count
int SmartArray::size()
{
	return this -> m_size;
}
//if the index is less than m_size index value is equal to the value we gave, we shift the remaining elements one index to the right
void SmartArray::insert( int index, int value  )
{
	if ( index >= 0 and index < m_size )
	{
		if(m_size<m_capacity-1)
		{	
			int* m_array1 = new int[m_capacity];
			int count = 0;
			for(int i = 0;i<m_size+1;i++)
			{	
				if (index == i)
				{
					continue;
				}
				m_array1[i] = m_array[count];
				count++;
				
			}
			m_array1[index] = value;
			delete [] m_array;
			m_array = m_array1;
			m_size++;
		}
		else
		{	
			change_capacity();
			int* m_array1 = new int[m_capacity];
			int count = 0;
			for(int i = 0;i<m_size+1;i++)
			{	
				if (index == i)
				{
					continue;
				}
				m_array1[i] = m_array[count];
				count++;
				
			}
			m_array1[index] = value;
			delete [] m_array;
			m_array = m_array1;
			m_size++;
				
		}
	}
	else
	{
		std::cout << "INDEX out of range" << std::endl;
		exit(1);
	}

}
//deleted given index element from array
void SmartArray::del(int index )
{
	if ( index >= 0 and index < m_size)
	{
		for( int i = index;i < m_size-1;i++)
		{
			m_array[i] = m_array[i+1];
		}
		m_size--;
	}
	else
	{
		std::cout << "INDEX out of range" << std::endl;
		exit(1);
	}

}
//deleted given value from array
void SmartArray::remove(int value)
{
	if(!m_size > 0)
	{
		std::cout << "Array is empty" << std::endl;
		exit(1);
	}
	int ind = -1;
	for(int i = 0;i < m_size;i++)
	{
		if ( m_array[i] == value )
		{
			ind = i;
			break;
		}
	}
	if( ind!=-1  )
	{
		del(ind);
	}
	else
	{
		std::cout << value << "-Not found in array" << std::endl;
		exit(1);
	}
	
}
//adding element  end of array
void SmartArray::push_back (int value)
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
//assigns the index to our value
int& SmartArray::operator[](int number)
{
	if(number >= 0 and  number < m_size)
	{
		return m_array[number];
	}
	else
	{
		std::cout << "INDEX out of range" << std::endl;
		exit(1);
	}
        return m_array[number];
}
//assign operator = assigns values of member variables of one object to member variables of another object
SmartArray& SmartArray::operator = (const SmartArray& object)
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
//deletes an element from the end of an array
void SmartArray::pop_back ()
{
	if(m_size<1)
	{
		std::cout << "Array is empty" << std::endl;
		exit(1);
	}
	m_array[m_size-1] = 0;
	m_size--;
}
