#include <iostream>
#include <cmath>

/*int main ()
{
	int num;
	std::cout<<"Enter number-"<<std::endl;
	std::cin>>num;
	int num1=num;
	int sum_nums=0;
	while (num!=0)
	{	sum_nums+=num%10;
		num=num/10;

	}
	std::cout<<num1<<"-Elements sum"<<std::endl;
	std::cout<<sum_nums<<std::endl;
}*/

/*int main () 
{
	while (true)
	{	int nums;
		std::cout<<"Enter number-";
		std::cin>>nums;
		if (nums==0)
		{
			std::cout<<"Break"<<std::endl;
			break;
		}
		if (nums>=100 && nums<=999) 
		{
			int last_el=nums%10;
			int first_el=nums/100;
			int mid_el=(nums-first_el*100)/10;
			int h_el=(last_el*100)+(mid_el*10)+first_el;
			//std::cout<<h_el<<"------"<<std::endl;
			if (nums==h_el)
			{
				std::cout<<nums<<"-Ispalindrom"<<std::endl;
			}

			
		}
		else
		{
			std::cout<<"tiv petqe lini eranish"<<std::endl;
		
		}
	
		}

}*/

/*int main () 
{
	int arrays[10];
	for (int i=0;i<10;i++)
	{	int el;
		std::cout<<"Enter number"<<"("<<i+1<<")-";
		std::cin>>el;
		arrays[i]=el;
	}
	int max_el=arrays[0];
	int max_elind=0;
	for (int i=0;i<10;i++)
	{
		if (arrays[i]>max_el)
		{
			max_el=arrays[i];
				max_elind=i;
				
		}	
	}
	std::cout<<max_el<<"-MAX_ELEMENT"<<std::endl;
	for (int i=0;i<10;i++)
	{
		std::cout<<arrays[i]<<",";
	}
	std::cout<<std::endl;

	for (max_elind;max_elind<10-1;max_elind++)
	{
		arrays[max_elind]=arrays[max_elind+1];
	
	}
	for (int i=0;i<10;i++)
	{
		std::cout<<arrays[i]<<",";
	}
	std::cout<<std::endl;
	return 0;
}*/


int main (){
	int a,b,c;
	std::cout<<"Enter A-";
	std::cin>>a;
	std::cout<<"Enter B-";
	std::cin>>b;
	std::cout<<"Enter C-";
	std::cin>>c;
	if (a==0)
	{
		std::cout<<"A-is not be  0"<<std::endl;
		return 0;
	
	}
	int descrim;
	descrim=(b*b)-4*(a*c);
	if (descrim<0)
	{
		std::cout<<"քառակուսային հավասարումը արմատներ չունի"<<std::endl;
	
	}
	else if (descrim==0)
	{
		double x;
		x=-(b/(2*a));
		std::cout<<"(x1-)"<<x<<std::endl;
	
	}
	else if (descrim>0)
	{
		double x1,x2;
		x1=(-b+sqrt(descrim))/(2*a);
		x2=-(b-sqrt(descrim))/(2*a);
		std::cout<<"(x1-)"<<x1<<std::endl;
		std::cout<<"(x2-)"<<x2<<std::endl;
	
	}
	std::cout<<std::endl;
	return 0;
}

