struct node
{       //default constructor   
        node();
        //constructor with argument where argument equal int
        node(int value);
        // int element
        int m_data;
        //next node type element pointer
        node* m_next;        
};
class Queue
{
        public:
                //default constructor
                Queue();
                //dectructor deleted all dynamtic node type elements
                ~Queue();
                //copy constructor
                Queue(const Queue& object);
                //Returns the size of the queue
                int size();
		//print queue elements
		void print();
		//delete all elements from Queue
		void del_all();
                //Returns true if the queue is empty, or false if it is non-empty
                bool empty();
		//Returns the value of the first element in the queue
		int front();
		//Returns the value of the last element in the queue
		int back();
		//Removes the first element from the queue, does not return a value
		void pop();
		//Adds a new element elem to the end of the queue
		void push(int value);
                //operator overloading  = 
                Queue& operator = (const Queue& object);
                //operator overloading []
                int& operator [] (int index);

        private:
                // list first element pointer
                node* m_first;
};

