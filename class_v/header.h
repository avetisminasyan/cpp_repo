#include <iostream>
#include <cstring>
class SmartArray
{
	public:
		SmartArray();
		SmartArray( int el_count );
		~SmartArray();
		void print();
		void push_back( int element );
		void pop_back();
		int size();
		int& operator[] (int other) ;
	private:
		int* m_array;
		int  m_size;
		int  m_capacity;
		int  m_index;


};
