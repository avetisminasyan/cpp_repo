#include <iostream>
#include <cstring>
//1
/*bool check_is_digit(std::string str);
int main () 
{
        int num;
        std::string num1;
        int sum=0;
	while(true)
	{
        	std::cout<<"Enter number-";
        	std::cin>>num1;
        	if(check_is_digit(num1))
        	{
                	num=stoi(num1);
			break;
        	}
        	else
        	{
                	std::cout<<"INPUT is not digit"<<std::endl;
			continue;
                	//return 0;
        	}
	}
        while(num!=0)
        {
                int l_el=num%10;
                num=num/10;
                sum+=l_el;
        }
        int mij=sum;
        sum=abs(mij);
        std::cout<<sum<<std::endl;
        return 0 ;
}
//stugum ete mer string bolor simvolner tveren ,kam araji elelement - ,e mnacac tver. veradarcnum e true hakarak depqum false
bool check_is_digit(std::string str)
{
        bool a=true;
        if(str[0]=='-')
        {
                a=true;
        }
        for(int i=1;i<str.size();i++)
        {
                if(!isdigit(str[i]))
                {
                        a=false;
                        return a;

                }

        }
        return a;
}*/

//2
/*bool check_is_digit(std::string str);
int main ()
{

        int num;
        std::string num1;
        int result=0;
	while(true)
	{
        	std::cout<<"Enter number-";
        	std::cin>>num1;
        	if(check_is_digit(num1))
        	{
                	num=stoi(num1);
			break;
        	}
        	else
        	{
               		std::cout<<"INPUT is not digit"<<std::endl;
			continue;
        	}
	}
        while(num!=0)
        {

                int l_el=num%10;
                num=num/10;
                result=result*10 + l_el;

        }
        std::cout<<result<<std::endl;
        return 0;
}
bool check_is_digit(std::string str)
{
        bool a=true;
        if(str[0]=='-')
        {
                a=true;
		if(str[1]=='0')
		{
			a=false;
			return a;
		}
        }
	else if(str[0]=='0')
	{
		a=false;
		return a;
	}
        for(int i=1;i<str.size();i++)
        {
                if(!isdigit(str[i]))
                {
                        a=false;
                        return a;

                }

        }
        return a;
}*/

