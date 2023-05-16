struct node
{ 	//default constructor	
	node();
	//constructor with argument where argument equal int
	node(int value);
	//constructor with arguments where arguments eqaul int and node type pointer
	node (int value,node* next);
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
		//copy constructor
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
		//delete all elements from LinkedList
		void del_all();
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
