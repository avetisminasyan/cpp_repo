#include <initializer_list>
class SmartArray
{
	public:
		//constructor without argument
		SmartArray();
		//constructor with argument
		SmartArray( int el_count );
		//destructor
		~SmartArray();
		//list initializer
		SmartArray(const std::initializer_list<int> &list);
		//Copy constructor
		SmartArray(const SmartArray& object );
		//public print
		void print();
		//public push_back method
		void push_back( int value );
		//public pop_back method
		void pop_back();
		//public size method
		int size();
		//public operator overloading
		int& operator[] ( int other );
		//operator overloading =
		SmartArray& operator=(const SmartArray& object );
		//public insert method
		void insert( int index, int value );
		//public remove method
		void remove (int value );
		//public del method
		void del ( int index );
	private:
		//dymatic array
		int* m_array;
		//array element count
		int  m_size;
		//dynamic array size
		int  m_capacity;
		//dymanic array size changer
		void change_capacity( int value );


};
