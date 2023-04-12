struct node
{	
	// int element
	int m_data;
	//next node type element pointer
	node* m_next;
	
};
class LinkedList
{
	public:
		//default constructor
		LinkedList();
		//dectructor deleted all dynamtic node type elements
		~LinkedList();
		//Copy constructor
		LinkedList(const LinkedList& object);
		//list element count
		int get_size();
		//checking is  list empty
		bool is_empty();
		//adding element end of list
		void push_back(int value);
		//insert  value in index of list
		int insert(int index,int value);
		//delete index element in list
		int del(int index);
		// remove element from list
		void remove(int value);
		//print linked_list elements
		void print();
		//delete last element in list
		int pop_back();
		//operator overloading  = 
		LinkedList& operator = (const LinkedList& object);
		//operator overloading []
		int& operator [] (int index);

	private:
		// list first element pointer
		node* m_first;

};
