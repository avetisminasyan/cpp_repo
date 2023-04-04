#include <iostream>
#include <cstring>
#include <stdlib.h>
class smartarray
{
	int* p;
	int c;
	public:
		smartarray()
		{
			p = new int[0];
			c = 0;
		}
		~smartarray()
		{
			delete [] p;
		}
		int len()
		{
			return c;
		}
		int& operator [](int other)
		{
			try
			{
				if (other<this->c)
				{
					return p[other];
				}
			
				else
				{
					throw "INDEX out of range";
				}
			}
			catch (const char* str)
			{
				std::cout<<str<<std::endl;
				exit(0);	
			}
			return p[other];
		}
		void append (int n)
		{
			int* p1 = new int[c+1];
			for (int i=0;i<c;i++)
			{
				p1[i]=this->p[i];
			}
			p1[c]=n;
			delete [] p;
			p=p1;
			c++;
		}
		void del(int n)
		{
			if (n>=0 and n<c)
			{
				if(c>=1)
				{	
					int co=0;
					int* p1 = new int[c-1];
					for (int i=0;i<c;i++)
					{
						if(i!=n)
						{
							p1[co]=p[i];
							co++;
						}
						else
						{
							continue;
						}
					}
					c--;
					delete [] p;
					p=p1;
				}
			}
			else if (c==0)
			{
			
				std::cout<<"Array is empty"<<std::endl;
				exit(0);
			}
			else
			{
				std::cout<<"INDEX out of range"<<std::endl;
				exit(0);
				
			}
		}
		void print()
		{
			for(int i=0;i<c;i++)
			{
				std::cout<<p[i]<<std::endl;
			}
		
		}



};
int main()
{
	smartarray ar;
	ar.append(15);
	ar.append(15);
	ar.append(15);
	ar.append(15);
	ar.append(15);
	ar.append(15);
	ar.del(5);
	ar[4]=25;
	ar.print();
	return 0;	
}
