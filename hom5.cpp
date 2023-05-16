#include <cstdlib>
#include <iostream>
#include <ctime>

int count[3]={};
int random_numb(int st,int end);
bool check_number(int r_n,int n,int st,int end);
void while_cin(int r_num,int st,int end,int count_i);
int main () 
{
	int st=10;
	int end=100;
	for(int i=0;i<3;i++)
	{	
		std::cout<<"Level-"<<i+1<<"random number-"<<st<<"-"<<end<<std::endl;
		int r_random_numb=random_numb(st,end);
		std::cout<<"random_number"<<r_random_numb<<std::endl;
		while_cin(r_random_numb,st,end,i);
		st=end;
		end=st*10;
	}

	std::cout<<std::endl;
	return 0;
}

int random_numb(int st,int end)
{
	std::srand(std::time(nullptr));
    	int random_variable = std::rand() % end + st;
	return random_variable;
}

bool check_number (int r_n,int n,int st,int end)
{
        int ns=r_n-n;
        int val1;
        val1=abs(ns);
       // std::cout<<val1<<"mer tiv";
        if(val1==0)
        {       
                std::cout<<"dug gdeleq tiv"<<std::endl;
                return true;
        }
        if(val1>0 && val1<=st/2)
        {
                std::cout<<"shad taqe"<<std::endl;
                return false;
        
        }
	else if(val1>st/2 && val1<=st)
	{
		std::cout<<"taqe"<<std::endl;
		return false;
	}
        else if (val1>st && val1<=end/4)
        {
               std::cout<<"paxe"<<std::endl;
                return false;
        
       	}
	else if(val1>end/4)
	{
		std::cout<<"shad paxe"<<std::endl;
	
	}
        return false;

}
void while_cin(int r_num,int st,int end,int count_i)
{	
	while (true)
	{	
		count[count_i]+=1;
		std::cout<<"Enter number-";
		int inp;
		std::cin>>inp;
		if(check_number(r_num,inp,st,end)==true)
		{
			break;
		}

	

	}
}
