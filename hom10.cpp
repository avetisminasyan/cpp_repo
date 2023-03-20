#include <iostream>
#include <cstring>
class Human
{
	public:
		std::string name;
		std::string surname;
		int age;
};
int main()
{
	Human h1={"avo","minasyan",23};
	Human h2={"karen","Saruxanyan",25};	
	Human h3={"Valod","Karapetyan",34};
	Human h4={"Simon","black",18};	
	Human h5={"Sako","Aleksanyan",24};
	Human arr[5]={h1,h2,h3,h4,h5};
	for(int i=0;i<5;i++)
	{
		for(int k=0;k<4;k++)
		{
			if(arr[k].age>arr[k+1].age)
			{
			
				Human i=arr[k+1];
				arr[k+1]=arr[k];
				arr[k]=i;
			}
		
		}
	}
	for(int i=0;i<5;i++)
	{
		std::cout<<arr[i].name<<std::endl;
		std::cout<<arr[i].age<<std::endl;
	}
	return 0;

}
