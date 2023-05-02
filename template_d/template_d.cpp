#include <iostream>
#include <string>
#include <cassert>
template<typename T>
struct node
{	
	//node type pointer int which we keep previous node type element addres
	node<T>* m_prev;
	// node type value
	T m_data;
	//node type pointer in which we keep next node type elemenet addres
	node<T>* m_next;
	//default constructor
	node();
	//constructor with argument where arguments type,can be any type
	node(T value)
	{
		m_data = value;

	}
};
template<typename T>
class LinkedList
{
	public:
		//default constructor where m_first eqaul nullptr m_size equal 0
		LinkedList()
		{
			m_first = nullptr;
			m_last = nullptr;
			m_size = 0;
		
		}
		//destructor that deletes all dynamic node type elements
		~LinkedList()
		{
			node<T>* n = m_first;
			while(n != nullptr)
			{
				node<T>* k = n -> m_next;
				delete n;
				n = k;
			}	
		}
		//this function returns the first element of the LinkedList otherwise -1
		T front()
		{
			if(m_first != nullptr)
			{
				return m_first -> m_data;

			}
			return -1;		
		}

		//this function returns the last  element of the LinkedList otherwise -1
		T back()
		{
			if(m_last != nullptr)
			{
				return m_last -> m_data;
			}
			return -1;
		}
		//this function adds an element to the beginning of the LinkedList
		void push_front(T f_value)
		{
			if(m_first == nullptr)
			{
				node<T>* n = new node<T>(f_value);
				n -> m_prev = nullptr;
				n -> m_next = nullptr;
				m_first = n;
				m_last = n;
				m_size++;

			}
			else
			{
				node<T>* n = new node<T>(f_value);
				n -> m_prev = nullptr;
				n -> m_next = m_first;
				m_first -> m_prev = n;
				m_first = n;
				m_size++;
			}
			
		}
		//this function adds an element end of the LinkedList
		void push_back(T f_value )
		{
			
			if(m_first == 0)
			{
				node<T>* n = new node<T>(f_value);
				n -> m_prev = nullptr;
				n -> m_next = nullptr;
				m_first = n;
				m_last = n;
				m_size++;

			}
			else
			{
				node<T>* n = new node<T>(f_value);
				n -> m_next = nullptr;
				n -> m_prev = m_last;
				m_last -> m_next = n;
				m_last = n;
				m_size++;
			}
			
		}
		//delete LinkedList last element
		void pop_back()
		{
			assert(m_size != 0 && "LinkedList is empty");
			if(m_size == 1)
			{
				delete m_first;
				m_first = nullptr;
				m_last = nullptr;
				m_size--;
			}
			else if (m_size > 1)
			{
				node<T>* n  = m_last -> m_prev;
				n -> m_next = nullptr;
				delete m_last;
				m_last = n;
				m_size--;
			}
		}
		//delete LinkedList first element
		void pop_front()
		{
			assert(m_size != 0 && "LinkedList is empty");
                        if(m_size == 1)
                        {
                                delete m_first;
                                m_first = nullptr;
                                m_last = nullptr;
                                m_size--;
                        }
                        else if (m_size > 1)
                        {
                                node<T>* n = m_first -> m_next;
                                delete m_first;
				m_first = n;
                                m_size--;
                        }

		
		}
		//if the index is less than the m_size index, the value of the m_size index is equal to the value we gave, we move the remaining elements to the right by one index and return 1. otherwise returns -1.
		int insert(int index,T value)
		{
			if(index < 0 and index >= m_size)
			{
				return -1;
	
			}
			if(index == 0 and m_size == 0 )
			{
				node<T>* n = new node(value);
				n -> m_prev = nullptr;
                                n -> m_next = nullptr;
				m_first = n;
				m_last = n;
				m_size++;
			}
			else if(index == 0 and index < m_size)
			{
				node<T>* n = new node(value);
				n -> m_next = m_first;
				n -> m_prev = nullptr;
				m_first = n;
				m_size++;
			}
			else if (index > 0 and index < m_size)
			{
				node<T>* k = new node(value);
				node<T>* n = m_first;
				for (int i = 0;i < index-1;i++)
				{
					n = n -> m_next;
				}
				k -> m_next = n -> m_next;
				k -> m_prev = n;
				if(index == m_size-1)
				{
					m_last = n -> m_next;
					m_last -> m_prev = k;
				}
				n -> m_next = k;
				m_size++;
			}
				return 1;
			}
		//assigns our value to the list index
		T& operator [] (int index)
		{
			assert(index >= 0 and  index <  m_size  && "INDEX out of range");
			node<T>* n = m_first;
			if(index >= 0 and index < m_size)
			{
				for(int i = 0; i<index;i++)
				{
					n = n -> m_next;
				}
			}
			return n -> m_data;
		}
		//function reverse reverses the order of the container elements in the range [first,last)
		void reverse()
		{
			node<T>* n = m_last;
			node<T>* e = m_first;
			for(int i = 0;i<m_size/2;i++)
			{
				T value = n -> m_data;
				n -> m_data = e -> m_data;
				e -> m_data = value;
				e = e -> m_next;
				n = n -> m_prev;
			}
		}
		//sorting our LinkedList by bubbl_esort
		void b_sort()
		{
			for(int i = 0;i < m_size;i++)
			{
				node<T>* n = m_first;
				while( n -> m_next != nullptr)
				{
					if( n -> m_data > n -> m_next -> m_data)
					{
						T value = n -> m_next -> m_data;
						n -> m_next -> m_data = n -> m_data;
						n -> m_data = value;
					}
						n = n -> m_next;

				}
			}
		}
		//sorting our LinkedList by insertion_sort
		void i_sort()
		{
			node<T>* n = m_first->m_next;
			for (int i = 1; i < m_size; i++)
			{
				T value = n -> m_data;
				node<T>* k = n->m_prev;
				while (k != nullptr and k -> m_data > value)
				{
					k -> m_next -> m_data = k -> m_data;
					k = k -> m_prev;
				}
				if (k == nullptr)
				{
					m_first->m_data = value;
				}
				else
				{
					k -> m_next -> m_data = value;
				}
				n = n -> m_next;
			}
		}
		//print LinkedList all elements
		void print()
		{

			node<T>* n = m_first;
			while(n != nullptr)
			{
				std::cout << n -> m_data << std::endl;
				n = n -> m_next;
			}
		}
	
	private:
		//LinkedList first element pointer
		node<T>* m_first;
		//LinkedList last element pointer
		node<T>* m_last;
		//LinkedList elements count
		int   m_size;
};
