#include <iostream>
#include <string>
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
			if(m_first != nullptr)
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
