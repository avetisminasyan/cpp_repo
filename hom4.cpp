#include <iostream>
#include <cstring>

bool check_is_digit(std::string);
int main ()
{
	int sum=0;
	while (true)
	{	
		std::string numb;
		std::cout<<"Enter number_";
		std::cin>>numb;
		if(check_is_digit(numb))
		{
			int num=stoi(numb);
			if(num==0)
			{
				std::cout<<sum<<std::endl;
				break;		
			}	
			if(num>0)
			{
				sum+=num;
			}
		
		}
		else
		{
			std::cout<<"please input  DIGIT"<<std::endl;
		
		}

	
	}

}

bool check_is_digit(std::string str)
{
	for(int i=0;i<str.size();i++)
	{
		if(isalpha(str[i]))
		{
			return false;
		
		}
	
	}
	return true;
}
