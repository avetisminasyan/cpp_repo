#include <iostream>
#include <cstring>
#include <cstdlib> 
#include <istream>
#include <ostream>
/*class Human
{
	int age;
	public:
		std::string name;
		std::string surname;
		Human(std::string name1="",std::string surname1="",int age1=0)
		{
			name=name1;
			surname=surname1;
			age=age1;
		}
		int get_age()
		{
			return age;
		}
	bool operator>(const Human& other)
	{
		if(this->age>other.age)
		{
			return true;
		}
		return false;
	}
};
void sorted_el(Human*,int);
int main()
{
	Human h1={"avo","minasyan",23};
	Human h2={"karen","Saruxanyan",25};	
	Human h3={"Valod","Karapetyan",34};
	Human h4={"Simon","black",18};	
	Human h5={"Sako","Aleksanyan",24};
	Human arr[5]={h1,h2,h3,h4,h5};
	sorted_el(arr,5);
	for(int i=0;i<5;i++)
	{
		std::cout<<arr[i].name<<"-";
		std::cout<<arr[i].get_age()<<std::endl;
	}
	return 0;
}
void sorted_el(Human* arr,int count)
{
	for(int i=0;i<count;i++)
	{
		for(int k=0;k<count-1;k++)
		{
			if(arr[k]>arr[k+1])
			{
				Human tmp=arr[k+1];
				arr[k+1]=arr[k];
				arr[k]=tmp;
			}
		
		}
	
	}

}*/

/*class Number
{
	int num;
	public:
		Number()
		{
			this->num = 0;
		}
		Number(int num)
		{
			this->num=num;
		}
	void set_num(int num)
	{
		this->num=num;
	}
	int get_num()
	{
		return num;
	}
	Number operator+(const Number& other)
	{
		Number tmp;
		tmp.num=this->num+other.num;
		return tmp;
	}

	Number operator-(const Number& other)
	{
		Number tmp;
		tmp.num=this->num-other.num;
		return tmp;
	}

	Number operator/(const Number& other)
	{
		Number tmp;
		if(this->num==0 or other.num==0)
		{
			tmp.num=0;
			return tmp;
		}
		tmp.num=this->num/other.num;
		return tmp;
	}
	Number operator*(const Number& other)
	{
		Number tmp;
		tmp.num=this->num*other.num;
		return tmp;
	}
	Number operator=(const Number& other)
	{
		if(&other==this)
		{
			return *this;
		}
		this->num=other.num;
		return *this;

	}
	Number operator%(const Number& other)
	{
		Number tmp;
		tmp.num=this->num%other.num;
		return tmp;
	}
	void operator ++ (int)
	{
		num++;
	}
	void operator ++()
	{
		++num;
		
	}
	void operator -- (int)
	{
		num--;
	}
	void operator --()
	{
		--num;
		
	}

	Number operator+(int num)
	{
		Number tmp;
		tmp.num=this->num+num;
		return tmp;
	}

	Number operator-(int num)
	{
		Number tmp;
		tmp.num=this->num-num;
		return tmp;
	}

	Number operator/(int num)
	{
		Number tmp;
		if(this->num==0 or num==0)
		{
			tmp.num=0;
			return tmp;
		}
		tmp.num=this->num/num;
		return tmp;
	}
	Number operator*(int num)
	{
		Number tmp;
		tmp.num=this->num*num;
		return tmp;
	}
	void operator+=(Number& other)
	{
		this->num+=other.num;
	}
	void operator-=(Number& other)
	{
		this->num-=other.num;
	}
	void operator*=(Number& other)
	{
		this->num*=other.num;
	}
	void operator/=(Number& other)
	{
		this->num/=other.num;
	}
	bool operator>(Number& other)
	{
		if(this->num>other.num)
		{
			return true;
		}
		return false;
	}
	bool operator<(Number& other)
	{
		if(this->num<other.num)
		{
			return true;
		}
		return false;
	}
	bool operator<=(Number& other)
	{
		if(this->num<=other.num)
		{
			return true;
		}
		return false;
	}
	bool operator>=(Number& other)
	{
		if(this->num>=other.num)
		{
			return true;
		}
		return false;
	}
	bool operator==(Number& other)
	{
		if(this->num==other.num)
		{
			return true;
		}
		return false;
	}
	bool operator!=(Number& other)
	{
		if(this->num!=other.num)
		{
			return true;
		}
		return false;
	}
	bool operator!()
	{
		if (this->num>1)
		{
			return true;
		}
		return false;

	}
	const bool operator&&(Number& other)
	{
		if(this->num and other.num)
		{
			return true;
		}
		return false;
	}
	const bool operator||(Number& other)
	{
		if(this->num or  other.num)
		{
			return true;
		}
		return false;
	}
	friend std::ostream& operator<<(std::ostream& out,const Number& other);
};
std::ostream& operator<<(std::ostream& out,const Number& other){
    out <<other.num;
    return out;
}
int main()
{
	Number n1(15);
	Number n2(2);
	Number n3;
	std::cout<<n3<<std::endl;
	n3=n2%n1;
	n1+=n2;
	//std::cout<<n1.get_num();
	//n1++;
	//++n1;
	//std::cout<<n1.get_num();
	//std::cout<<n3.get_num();	
	std::cout<<std::endl;
}*/
