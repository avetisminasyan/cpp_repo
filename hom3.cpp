#include <iostream>
#include <cstring>
bool check_is_prime(int num);
/*int main () 
{	int num;
	std::cout<<"Enter number-";
	std::cin>>num;
	bool check=check_is_prime(num);
	//std::cout<<check<<std::endl;
	if (check==true)
	{
		std::cout<<num<<"-ISprime"<<std::endl;
	}
	else
	{
		std::cout<<num<<"-Is not prime"<<std::endl;
	}

}

*/
/*int main ()
{
	int num;
	std::cout<<"Enter number-";
	std::cin>>num;
	while (true)
	{
		bool check=check_is_prime(num);
		if (check==true)
		{
			std::cout<<num<<"-ISprime"<<std::endl;
			break;
		}
		num+=1;
	}
}*/

/*int main () 
{	
	int num;
	std::cout<<"Enter number-";
	std::cin>>num;
	int min=num;
	int max=num;
	while (true)
	{
		min-=1;
		max-=1;
		bool check_min=check_is_prime(min);
		bool check_max=check_is_prime(max);

		if (check_min==true)
		{
			std::cout<<min<<"-Near Prime"<<std::endl;
			break;
		}
		
		if (check_max==true)
		{
			std::cout<<max<<"-Near prime"<<std::endl;
			break;
		}
	}
}*/
bool check_is_prime(int num)
{
	for(int i=2;i<=num/2;i++)
	{	
	//	std::cout<<i<<","<<std::endl;
		if (num%i==0)
		{
			return false;
		}

	}
	return true;

}
