struct node
{
	// int element
	int m_data;
	// prev node type element pointer
	node* m_prev;
	// next node type element pointer
	node* m_next;
};
class Tree
{
	public:
		//default constructor
		Tree();
		//destructor
		~Tree();
		//push method 
		void push(int value);
		//print all elements
		void print();
		void print_tree(node* p);
	private:
		//delete all elements
		void destroy(node* n);
		node* _push(node* p,int value);
		//node type elements first pointer
		node* m_root;
};
