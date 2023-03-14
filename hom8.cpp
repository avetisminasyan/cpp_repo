#include <iostream>
#include <cstring>

/*struct Human
{
	std::string name;
	int age;
	int height;
};
int main()
{	
	Human arr[5]=
	{
		{"avo",23,178},{"karen",24,187},{"valod",28,156},{"Simon",30,180},{"Pap",59,176}
	};
	std::string str=arr[0].name;
	int age=arr[0].age;
	for(int i=0;i<5;i++)
	{
		if(arr[i].age>age)
		{
			str=arr[i].name;
			age=arr[i].age;
		}
	}
	std::cout<<"Name-"<<str<<std::endl;
	std::cout<<"Age-"<<age<<std::endl;
	return 0;
}*/

struct triangle
{
	int x;
	int y;
};
int main()
{
	triangle a={0,1};
	triangle b={1,1};
	triangle c={1,2};
	double pay1=(c.x - a.x) / (b.x-a.x);
	double pay2=(c.y - c.y) / (b.y-a.y);
	if(pay1!=pay2)
	{
		std::cout<<"Erankyun karelie karucel";
	}
	else
	{
		std::cout<<"Erankyun chi kareli karucel";
	}
	//std::cout<<pay1<<std::endl;
	return 0;
}

