struct node
{	
	// int element
	int data;
	//next node type element pointer
	node* next;
	
};
class LinkedList
{
	public:
		//default constructor
		LinkedList();
		//dectructor deleted all dynamtic node type elements
		~LinkedList();
		//list element count
		int get_size();
		//checking is  list empty
		bool is_empty();
		//adding element end of linked_list
		void push_back(int value);
		//print linked_list elements
		void print();
		//delete last element in list
		void pop_back();

	private:
		//linkedlist first element pointer
		node* first;

};
