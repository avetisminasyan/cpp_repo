#include <iostream>
#include <cstring>
class Human
{
	public:
		std::string name;
		std::string surname;
		int age;
		Human()
		{
			this->name="Default_name";
			this->surname="Default_surname";
		}
		virtual void get_name()
		{
			std::cout<<name<<",";
			std::cout<<surname<<",";
			std::cout<<age<<","<<std::endl;
		}

};
class Employe:public Human
{	public:
		std::string company_name;
		int salary;
	//std::string job_name;
		Employe(std::string name,std::string surname,int age,std::string company_name,int salary)
		{
			this->name=name;
			this->surname=surname;
			this->age=age;
			this->company_name=company_name;
			this->salary=salary;
		}
		Employe()
		{
			this->company_name="";
			this->salary=0;
		}	
};
class staf:public Employe
{	public:
		int level;
		std::string prof;
		staf(std::string name,std::string surname,int age,std::string company_name,int salary,int level,std::string prof)
		{
			this->name=name;
			this->surname=surname;
			this->age=age;
			this->company_name=company_name;
			this->salary=salary;
			this->prof=prof;
			this->level=level;
		}
		bool operator==(const staf& other)
		{
			if(this->prof==other.prof)
			{
				return true;
			}
			return false;
		}
		staf()
		{
			this->prof="default_prof";
			this->level=0;
		}

};
class Manager:public Employe
{	public:
		int count;
		staf arr[5]={};
		Manager()
		{
			count=0;
			
		
		}
		Manager(std::string name,std::string surname,int age,std::string company_name,int salary)
		{
			this->name=name;
			this->surname=surname;
			this->age=age;
			this->company_name=company_name;	
			this->salary=0;
		}
		void hire(staf& obj)
		{
			if(count<=5)
			{
				for(int i=0;i<5;i++)
				{
					if (arr[i].prof=="default_prof")
					{
						arr[i]=obj;
						count++;
						break;
					
					}
				}
			}
		
		}
		void fire(staf& obj)
		{
			for(int i=0;i<5;i++)
			{
				if(arr[i]==obj)
				{
					staf df;
					arr[i]=df;
					count--;
					break;
				}
			}
			
		}
		void get_arr()
		{
			for(int i=0;i<5;i++)
			{
				std::cout<<arr[i].prof<<std::endl;
			}
		}	
};
int main()
{
//	Employe emp;
//	std::cout<<emp.job_price;
	staf staf2("avo","minasyan",18,"instigate",1500,2,"programmer1");
	staf staf3("avo","minasyan",18,"instigate",1500,2,"programmer2");
	staf staf4("avo","minasyan",18,"instigate",1500,2,"programmer3");
	staf staf5("avo","minasyan",18,"instigate",1500,2,"programmer3");
	staf staf6("avo","minasyan",18,"instigate",1500,2,"programmer5");
	staf staf7("avo","minasyan",18,"instigate",1500,2,"programmer6");
	Manager m1;
	m1.hire(staf2);
	m1.hire(staf3);
	m1.hire(staf4);
	m1.hire(staf5);
	m1.hire(staf6);
	m1.hire(staf2);
	m1.get_arr();
	m1.fire(staf2);
	m1.fire(staf6);
	m1.get_arr();
}
