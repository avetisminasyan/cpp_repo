#include <iostream>
#include "b_tree.hpp"
Tree::Tree()
{
	m_root = nullptr;	

}
void Tree::destroy(node* n)
{
	if(n != nullptr)
	{
		if( n -> m_prev == nullptr and n -> m_next == nullptr)
		{
			delete n;
			m_root = nullptr;
		}
		else
		{
			destroy(n -> m_prev);
			destroy(n -> m_next);
		}
	}	
}
Tree::~Tree()
{
	destroy(m_root);
}
void Tree::push(int value)
{
	m_root = _push(m_root,value);
}
node* Tree::_push(node* p,int value)
{
	if (p == nullptr)
	{
		p = new node;
		p -> m_data = value;
		p -> m_prev = nullptr; 
		p -> m_next = nullptr;
	}
	else if(value < p -> m_data)
            p-> m_prev  = _push(p -> m_prev,value);
        else if(value > p -> m_data)
            p -> m_next = _push(p -> m_next,value);
        return p;
}
void Tree::print_tree(node* p)
{
	if(p == nullptr)
	{
		return;
	}
	print_tree(p -> m_prev);
	std::cout << p -> m_data << ",";
	print_tree(p -> m_next);
}
void Tree::print()
{
	print_tree(m_root);
	std::cout << std::endl;
	

}
