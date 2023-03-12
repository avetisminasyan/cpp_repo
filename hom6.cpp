#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
//1
/*int main () 
{
	std::cout<<"Enter number-";
	int num;
	int sum=0;
	std::cin>>num;
	while(num!=0)
	{
		int l_el=num%10;
		num=num/10;
		sum+=l_el;
	}
	std::cout<<sum<<std::endl;
	return 0 ;
}*/
//2

/*int main ()
{
	
	std::cout<<"Enter number-";
	int num;
	int result=0;
	std::cin>>num;
	while(num!=0)
	{
				
		int l_el=num%10;
		num=num/10;
		result=result*10 + l_el;

	}
	std::cout<<result<<std::endl;
	return 0;
}*/
//3

/*bool check_is_prime(int);
int main () 
{
	std::cout<<"Enter number-";
	int num;
	std::cin>>num;
	//bool check=check_is_prime(num);
	if (check_is_prime(num))
	{
		std::cout<<"INPUT NUMBER IS PRIME"<<std::endl;
	}
	for(int i=0;i<num;i++)
	{
		//bool check=check_is_prime(i);
		if(check_is_prime(i))
		{
			std::cout<<i<<",";
		}
	}
	std::cout<<std::endl;

	
}

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

}*/
//4

/*int main ()
{
	
	std::cout<<"Enter number-";
	int num;
	int result=0;
	std::cin>>num;
	int pal=num;
	while(num!=0)
	{
				
		int l_el=num%10;
		num=num/10;
		result=result*10 + l_el;

	}
	if(result==pal)
	{
		std::cout<<result<<"-IS PALINDROM"<<std::endl;
	}
	else
	{
		std::cout<<pal<<"-IS NOT PALINDROM"<<std::endl;
	}
	//std::cout<<result<<std::endl;
	return 0;
}*/
//5

/*int concate(int a,int b);
int main()
{
	std::cout<<"Enter number1-";
	int a;
	std::cin>>a;
	std::cout<<"Enter number2-";
	int b;
	std::cin>>b;
	int conc=concate(a,b);
	std::cout<<conc<<std::endl;
	return 0;

}

int concate(int a,int b)
{
	int bazm=1;
	while(bazm<b)
	{
		bazm*=10;
	}
	return bazm*a+b;

}*/
//6
/*int main ()
{
	int num;
	std::cout<<"Enter number-";
	std::cin>>num;
	int sum=2;
	bool flag=false;
	while(sum<=num)
	{
		if(sum==num)
		{
			flag=true;
			break;
		}
		sum*=2;
	}
	if(flag==true)
	{
		std::cout<<"2 astijan tive"<<std::endl;
	}
	else
	{
		std::cout<<"2 astijan tiv che"<<std::endl;
	}
	return 0;

}*/
//7

/*int main ()
{
	int m,n;
	std::cout<<"Enter number1-";
	std::cin>>m;
	std::cout<<"Enter number2-";
	std::cin>>n;
	for(int i=0;i<n;i++)
	{
		if(i==0 || i==n-1)
		{
			for(int i=0;i<m;i++)
			{
				std::cout<<'*';
			}
			std::cout<<std::endl;
		}
		else
		{
			for(int i=0;i<m;i++)
			{
				if(i==0 || i==m-1)
				{
					std::cout<<'*';
				}
				else
				{
					std::cout<<' ';
				}
			}
			std::cout<<std::endl;
		}
	}

}*/
//8

/*int main ()
{
	int m,n;
	std::cout<<"Enter number1-";
	std::cin>>m;
	std::cout<<"Enter number2-";
	std::cin>>n;
	for(int i=0;i<n;i++)
	{
		if(i==0 || i==n-1)
		{
			for(int i=0;i<m;i++)
			{
				std::cout<<'$';
			}
			std::cout<<std::endl;
		}
		else
		{
			for(int i=0;i<m;i++)
			{
				if(i==0 || i==m-1)
				{
					std::cout<<'$';
				}
				else
				{
					std::cout<<' ';
				}
			}
			std::cout<<std::endl;
		}
	}

}*/

//9

/*int main () 
{
	int a;
	std::cout<<"Enter number-";
	std::cin>>a;
	int space=a-1;
	for(int i=0;i<a;i++)
	{
		for(int k=0;k<=i;k++)
		{
			std::cout<<'*';
		}
		std::cout<<std::endl;
	}
	for(int i=0;i<a;i++)
	{
		for(int k=0;k<space;k++)
		{
			std::cout<<' ';
		}
		for(int k=0;k<=i;k++)
		{
			std::cout<<'*';
		}
		space-=1;
		std::cout<<std::endl;

	}	
	

	return 0;
}*/

//10

/*bool check_is_prime(int num);
int space_c(int num);
void triuncle(int space_c,int el_c);
int main ()
{
       int a;
       std::cout<<"Enter number-";
       std::cin>>a;
       int b=0;
       if (a%2!=0)
       {
       		b=space_c(a);
		//std::cout<<b<<std::endl;	
       }
       else
       {
		std::cout<<"mutqagrac arzheq petqe lini kent"<<std::endl; 
 	      	return 0;
       }
       triuncle(b,a);
       return 0;

}
int space_c(int num)
{	
	int count=0;
	while(num!=1)
	{
		num-=2;
		count+=1;
	}
	return count;

}

void triuncle(int space_c,int el_c)
{
	int els=1;
	while(el_c+2!=els)
	{
		for(int i=0;i<space_c;i++)
		{
			std::cout<<' ';
		}
		space_c-=1;
		for(int i=0;i<els;i++)
		{
			std::cout<<'*';
		}
		els+=2;
		std::cout<<std::endl;
	
	}
	

}*/

//11

/*int random_numbers(int n);
bool check_number(int,int);
int main ()
{	
	
	int num;
	std::cout<<"Enter number-";
	std::cin>>num;
	if(num>1)
	{
		int r_num=random_numbers(num);
		std::cout<<r_num;
		bool a=true;
		int count=0;
		while (a)
		{	
			count+=1;	
			int num;
			std::cout<<"Enter number1-";
			std::cin>>num;
			bool as=check_number(r_num,num);
			if(as==true)
			{
				a=false;	
				std::cout<<std::endl;
			}

			
		
		}
	}
	else
	{
		std::cout<<"Enter number greater than 1";
	}
	std::cout<<std::endl;
	return 0;
}

int random_numbers(int n)
{
	std::srand(std::time(nullptr)); // use current time as seed for random generator
    	int random_variable = std::rand() % n + 1;
	return random_variable;
}

bool check_number (int r_n,int n)
{
	int ns=r_n-n;
	int val1;
	val1=abs(ns);
	//std::cout<<val1<<"mer tiv";
	if(val1==0)
	{	
		std::cout<<"dug gdeleq tiv"<<std::endl;
		return true;
	}
	if(val1>0 && val1<=5)
	{
		std::cout<<"shad taqe"<<std::endl;
		return false;
	
	}
	else if (val1>5 && val1<=10)
	{
		std::cout<<"taqe"<<std::endl;
		return false;
	else if(val1>10 && val1<=20)
	{
		std::cout<<"paxe"<<std::endl;
		return false;
	}
	else if(val1>20)
	{
		std::cout<<"shad paxe"<<std::endl;
		return false;
	}
	
	}
	return false;

}*/
//12
/*int main()
{
 	int min, max;
 	min=0;
 	max=100;
 	int usernum;
	std::cout<<"Enter number-";
 	std::cin >> usernum;
 	std::cout << std::endl;
 	int r_num, count = 1;
 	r_num = ( max + min ) / 2;
	while(usernum!=r_num)
	{
		std::cout<<"Computer number is-"<<r_num<<std::endl;
		std::cout<< "\tIs your number higher? (y/n) : ";
		char yesno;
		std::cin>>yesno;
		if(yesno=='y')
		{
			min=r_num;
			r_num=(r_num+max)/2;
		}
		else if(yesno=='n')
		{
			max=r_num;
			r_num=(min+r_num)/2;
		}
		count+=1;
	}
	std::cout<<"Your number is-"<<r_num<<std::endl;
	std::cout<<"Count-"<<count<<std::endl;
	return 0;
	

}*/



//13
/*int arr[10]={};
void input_numbers();
int main ()
{
	input_numbers();
	for(int i=0;i<10;i++)
	{
		std::cout<<i+1<<"-"<<arr[i]<<std::endl;
	}
	

}

void input_numbers()
{
	while(true)
	{
		int a;
		std::cout<<"Enter number-";
		std::cin>>a;
		if(a==-1)
		{
			break;
		}
		if(a>0 && a<=10)
		{
			arr[a-1]+=1;
		}
	}


}*/

//14
/*int main () 
{
	std::string num;
	std::cout<<"Enter Decimal number-";
	std::string b_num="";
	std::cin>>num;
	int num1;
	bool flag=false;
	if(num[0]=='-')
	{
		num=num.substr(1);
		num1=stoi(num);
		flag=true;

	}
	else
	{
		num1=stoi(num);
	}
	while(num1!=0)
	{
		int g=num1%2;
		if(g==0)
		{
			b_num+='0';
		}
		else if(g==1)
		{
			b_num+='1';
		}
		num1=num1/2;
	}
	if(flag)
	{
		std::cout<<"-"<<b_num<<std::endl;
	}
	else
	{
		std::cout<<b_num<<std::endl;
	}	
	std::cout<<std::endl;
	return 0;
}*/

//15
/*int main ()
{
	std::string binary;
	std::cout<<"Enter binary number-";
	std::cin>>binary;
	int decimal=0;
	bool flag=false;
	if(binary[0]=='-')
	{
		flag=true;
		binary=binary.substr(1);
	}
	for(int i=0;i<binary.size();i++)
	{
		if(binary[i]=='1' || binary[i]=='0')
		{
			
		}
		else
		{
			std::cout<<"number is not binary"<<std::endl;
			return 0;
		}
	}
	int size=(binary.size()-1);
	for(int i=0;i<binary.size();i++)
	{
		int num=binary[i]-'0';
		decimal+=num*(pow(2,size));
		size-=1;
	}
	if (flag==true)
	{
		decimal=decimal-(2*decimal);
	}
	std::cout<<decimal<<std::endl;
	std::cout<<std::endl;
	return 0;
}*/

//16

/*int main ()
{
	std::cout<<"fibonaci numbers count-";
	int num;
	std::cin>>num;
	int arr[num];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<num;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
	//for(int i=0;i<num;i++)
	//{
	//	std::cout<<arr[i]<<",";
	//}
	std::cout<<arr[num-1]<<std::endl;
	std::cout<<std::endl;

}*/

//17
/*int num_el(int num);
int main () 
{
	int num;
	std::cout<<"Enter number-";
	std::cin>>num;
	int el=0;
	int bazm=1;
	int ret=num_el(num);
	int arr[ret]={};
	int el_i=0;
	while(num!=0)
	{
		int l_el=num%10;
		arr[el_i]=l_el;
		el_i+=1;
		num=num/10;
	}
	for(int i=0;i<(ret*2)-1;i++)
	{
		bazm=bazm*10;
	}
	for(int i=0;i<el_i;i++)
	{
		el+=arr[i]*bazm;
		bazm/=100;
	}
	std::cout<<el<<std::endl;
	return 0;
}
int num_el(int num)
{	
	int count=0;
	while(num!=0)
	{	
		count+=1;
		int l_el=num%10;
		num=num/10;
	}
	return count;
}*/

//18

/*int num_el(int num);
void num_armstrong(int num,int el_c);
int main () 
{	
	for(int i=10;i<=999;i++)
	{
		int el_c=num_el(i);
		num_armstrong(i,el_c);
	}
	std::cout<<std::endl;
	return 0;
}
int num_el(int num)
{	
	int count=0;
	while(num!=0)
	{	
		count+=1;
		int l_el=num%10;
		num=num/10;
	}
	return count;
}
void num_armstrong(int num,int el_c)
{
	int num1=num;
	int sum=0;
	while(num!=0)
	{
		int l_el=num%10;
		sum+=pow(l_el,el_c);
		num=num/10;
	}
	if(num1==sum)
	{
		std::cout<<sum<<",";
	}
}*/


//19
/*int arr[10];
void r_numbers();
int max_num();
int main ()
{
	r_numbers();
	int max_nums=max_num();
	int max_el_count=0;
	for(int i=0;i<10;i++)
	{
		if(arr[i]==max_nums)
		{
			max_el_count+=1;
		}
	}
	std::cout<<max_nums<<"-"<<max_el_count<<std::endl;
	return 0;

}
void r_numbers()
{
	for(int i=0;i<10;i++)
	{	
		int num;
		std::cout<<"Enter number("<<i+1<<")-";
		std::cin>>num;
		arr[i]=num;
	}
}
int max_num()
{	
	int max_el=arr[0];
	for(int i=0;i<10;i++)
	{
		if(arr[i]>max_el)
		{
			max_el=arr[i];
		}

	}
	return max_el;
}*/
