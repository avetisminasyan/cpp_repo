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
class Stack
{
        public:
                //default constructor
                Stack();
                //dectructor deleted all dynamtic node type elements
                ~Stack();
                //copy constructor
                Stack(const Stack& object);
                //Returns the size of the queue
                int size();
                //print queue elements
                void print();
                //delete all elements from Stack
                void del_all();
                //Returns true if the stack is empty, or false if it is non-empty
                bool empty();
                //Returns the value of the top element in the glass
		int top();
                //Removes the top element from the stack, does not return a value
		void pop();
                //Adds a new element elem to the end of the stack
                void push(int value);
                //operator overloading  = 
                Stack& operator = (const Stack& object);
                //operator overloading []
                int& operator [] (int index);

        private:
                // list first element pointer
                node* m_first;
};

