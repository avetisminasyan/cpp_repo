class Stack
{
	public:
		//constructor without argument
		Stack();
		//destructor
		~Stack();
		//Copy constructor
		Stack(const Stack& object);
		//Returns the size of the queue
		int size();
		//print stack elements
		void print();
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
		//dymatic array
		int* m_array;
		//array element count
		int  m_size;
		//dynamic array size
		int  m_capacity;
		//dymanic array size changer
		void change_capacity();
};
