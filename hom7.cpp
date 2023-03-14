#include <iostream>
#include <cstring>
#include <cmath>
//1
/*void random_numbers(int* n);
void num_el(int num,int* n);
int main () 
{
	int random_n[10]={};
	random_numbers(random_n);
	int number_c[10]={};
	for(int i=0;i<10;i++)
	{
		num_el(random_n[i],number_c);
	}
	int max_el_i=0;
	int max_el_c=0;
	for(int i=0;i<10;i++)
	{
		if(number_c[i]>max_el_c)
		{
			max_el_i=i;
			max_el_c=number_c[i];
		}
	}
	std::cout<<"MaxNumber-"<<max_el_i<<","<<"COunt-"<<max_el_c<<std::endl;
	return 0;
}
void random_numbers(int* n)
{
	for(int i=0;i<10;i++)
	{
		std::cout<<"Enter number-";
		int num;
		std::cin>>num;
		n[i]=num;
	}

}
void num_el(int num,int* n)
{
	while(num!=0)
	{
		int el=num%10;
		n[el]+=1;
		num=num/10;
	}
}*/


//2
/*void random_numbers(int* n,int* n1);
void sorting_el(int* n);
int main()
{
	int random_n[10]={};
	int random_n1[10]={};
	random_numbers(random_n,random_n1);
	sorting_el(random_n1);
	bool flag=true;
	for(int i=0;i<10;i++)
	{
		if(random_n[i]!=random_n1[i])
		{
			flag=false;
			break;
		}
	}
	
	bool flag1=true;
	int a=0;
	if(flag=false){
		flag=true;
		for(int i=9;i>=0;i--)
		{
			if(random_n1[i]!=random_n[a])
			{
				flag=false;
				break;
			}
			a+=1;
		}
	}
	if(flag || flag1)
	{
		std::cout<<"YES"<<std::endl;
	}

	return 0;
}

void random_numbers(int* n,int* n1)
{
	for(int i=0;i<10;i++)
	{
		std::cout<<"Enter number-";
		int num;
		std::cin>>num;
		n[i]=num;
		n1[i]=num;
	}

}
void sorting_el(int* n)
{
	for(int i=0;i<10;i++)
	{
		for(int i=0;i<9;i++)
		{
			if(n[i]>n[i+1])
			{
				int tmp=n[i];
				n[i]=n[i+1];
				n[i+1]=tmp;
			}
		}
		
	}

}*/
//3
/*void random_numbers(int* n);
void sorting_el(int* n);
int main ()
{
	int arr[10]={};
	int arr_n[10]={};
	random_numbers(arr);
	sorting_el(arr);
	int ind=0;
	for(int i=9;i>=0;i--)
	{
		arr_n[ind]=arr[i];
		ind+=1;
	}

}
void random_numbers(int* n)
{
	for(int i=0;i<10;i++)
	{
		std::cout<<"Enter number-";
		int num;
		std::cin>>num;
		n[i]=num;
	}

}
void sorting_el(int* n)
{
	for(int i=0;i<10;i++)
	{
		for(int i=0;i<9;i++)
		{
			if(n[i]>n[i+1])
			{
				int tmp=n[i];
				n[i]=n[i+1];
				n[i+1]=tmp;
			}
		}
		
	}

}*/
//4

/*int main()
{
	int* arr=new int[10] {1,2,3,4,5,6,7,8,9,10};
	int num;
	std::cout<<"Enter delete position-";
	std::cin>>num;
	for(int i=0;i<10;i++)
	{
		std::cout<<arr[i]<<",";
	}
	if(num>10)
	{
		std::cout<<"Out of range";
		return 0;
	}
	else
	{
		for(int i=num-1;i<10;i++)
		{
			arr[i]=arr[i+1];
		}
	}
	int* arr1=new int[9];
	for(int i=0;i<9;i++)
	{
		arr1[i]=arr[i];
	}
	delete  [] arr;
	arr=arr1;
	std::cout<<std::endl;
	for(int i=0;i<9;i++)
	{
		std::cout<<arr[i]<<",";
	}
	std::cout<<std::endl;
	return 0;
}*/
//5
/*int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	std::cout<<"Enter number K-";
	int num;
	std::cin>>num;
	std::cout<<"Enter M position-";
	int num1;
	std::cin>>num1;
	arr[0]=num;
	arr[9]=num;
	if(num1<=10)
	{
		arr[num1]=num;
	}
}*/

//6
/*int main ()
{
	int arr[10]={2,4,5,8,10,15,25,24,17,36};
	int num;
	std::cout<<"Texasharzhi qanak-";
	std::cin>>num;
	int ind=arr[0];
	int ind1=arr[1];
	for(int k=0;k<num;k++)
	{
		for(int i=0;i<9;i++)
		{	
			ind1=arr[i+1];
			arr[i+1]=ind;
			//count++;
			ind=ind1;
		}
		arr[0]=ind;
	}
	for(int i=0;i<10;i++)
	{
		std::cout<<arr[i]<<",";
	}
	std::cout<<std::endl;
	return 0;	
}*/

//7
/*int return_karg(int n);
bool check_is_prime(int n);
int six_dec(int n);
int main()
{
	int num;
	std::cout<<"Enter number-";
	std::cin>>num;
	int ret=return_karg(num);
	int bazh_c=0;
	for(int i=1;i<num/2;i++)
	{
		if(num%i==0)
		{
			if(check_is_prime(i))
			{
				bazh_c+=1;
	//			std::cout<<i<<std::endl;
			}	
		}
	}
	int zer_c=six_dec(num);
	int harevan_zuyg=0;
	if(num%2!=0)
	{
		harevan_zuyg+=2;
	}
	//std::cout<<zer_c<<std::endl;
}
int return_karg(int n)
{
	int max_n=0;
	int max_n_i=1;
	int count=1;
	while(n!=0)
	{
		int ns=n%10;
		if(ns>=max_n)
		{
			max_n=ns;
			max_n_i=count;
		}
		n=n/10;
		count+=1;
	}
	return max_n_i;
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

}

int six_dec(int n )
{	
	int zer_c=0;
	while(n!=0)
	{
		if(n%16==0)
		{
			zer_c+=1;
		}
		n=n/16;
	}
	return zer_c;

}*/

//8
/*void true_false(int n,int k);
std::string num_format(int n,int k);
int main()
{
	int n,m;
	std::cout<<"Enter N-";
	std::cin>>n;
	std::cout<<"Enter k-";
	std::cin>>m;
	true_false(n,m);
	if(m<10)
	{
		std::string str=num_format(n,m);		
		std::cout<<str<<std::endl;	
	}

}

void true_false(int n,int k)
{	
	int astijan=1;
	int sum=0;
	while(sum<n)
	{	
		if(sum>n)
		{
			break;
		}
		sum=pow(k,astijan);
		astijan+=1;
	}
//	std::cout<<sum<<std::endl;
	if(sum==n)
	{
		std::cout<<"YESS"<<std::endl;
	}
	else
	{
		std::cout<<"NOOO"<<std::endl;
	
	}
}
std::string num_format(int n,int k)
{
	std::string str="";
	while(n!=0)
	{
		int el=n%k;
		std::string s = std::to_string(el);
		str=s+str;
		n=n/k;
	}
	return str;
}*/

/*bool check(int n,int k)
int main()
{
	int n,k;
	std::cout<<"Enter N-";
	std::cin>>n;
	std::cout<<"Enter k-";
	std::cin>>m;
	if(check(n,k))
	{
		std::cout<<"YES"<<std::endl;
	}
	else
	{
		std::cout<<"No"<<std::endl;
	}
	return 0;
}

bool check(int n,int k)
{
	double i = log(n) / log(k);
	return i == trunc(i);
}*/

//9
/*void arr1_arr2(int num1,int num2,int ind,int*);
int main()
{
	int arr1[10]={45,78,56,45,36,89,45,68,210,150};
	int arr2[10]={45,12,56,78,30,36,45,96,154,145};
	int arr3[10]={};
	for(int i=0;i<10;i++)
	{
		arr1_arr2(arr1[i],arr2[i],i,arr3);
	
	}
	for(int i=0;i<10;i++)
	{
		std::cout<<arr3[i]<<",";
	}
	std::cout<<std::endl;
	return 0;
}
void arr1_arr2(int num1,int num2,int ind,int* c)
{
	int st;
	int end;
	if(num1>num2)
	{
		st=num2;
		end=num1;
	}
	for(int i=st;i>=1;i--)
	{
		if(num1%i==0 && num2%i==0)
		{
			c[ind]=i;
			break;
		
		}
	}

}*/
//10
/*int main()
{
	char ar[12]="hellosssld";
	std::string str="";
	for(int i=0;i<12;i++)
	{	
		std::string el="";
		for(int k=i+1;i<12;i++)
		{
			if(ar[i]!=ar[k])
			{
				break;
			}
			else
			{
				el+=ar[k];
				}
		/

		if(el.size()>str.size())
		{
			str=el;
		}
	}
	std::cout<<str;
	std::cout<<std::endl;
	return 0;
}*/
//11
/*int find(std::string,std::string);
int main()
{
	std::string str;
	std::string str1;
	std::cout<<"Enter string1-";
	std::getline(std::cin, str);
	std::cout<<"Enter string2-";
	std::cin>>str1;
	int arr=find(str,str1);
	if(arr!=-1)
	{
		std::cout<<arr<<std::endl;
	}
	else
	{
		std::cout<<arr<<std::endl;
	}
	return 0;
}


int find(std::string s1,std::string s2)
{
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]==s2[0])
		{
				//std::cout<<"hello wolrd"<<std::endl;
				std::string el="";
				int ind=0;
				for(int k=i;k<i+s2.size();k++)
				{
					if(s1[k]!=s2[ind])
					{
						break;
					}
					else
					{
						el+=s1[k];
						//std::cout<<el<<std::endl;
					}
					ind+=1;
				if(el==s2)
				{	
					//std::cout<<"Havasareen";
					return i;
				}
				}
			
			}
		
	}

		
	return -1;
}*/

//12
/*std::string toLower(std::string);
std::string toUpper(std::string);
int main()
{
	std::string str;
	std::cout<<"Input string-";
	std::getline(std::cin, str);
	std::string lower=toLower(str);
	std::string upper=toUpper(str);
	std::cout<<lower<<std::endl;
	std::cout<<upper<<std::endl;
	return 0;

}
std::string toLower(std::string str)
{
	std::string str_r="";
	for(int i=0;i<str.size();i++)
	{
		char a=str[i];
		int dig=a;
		if(dig>=65 && dig<=90)
		{
			dig+=32;
			char el=dig;
			str_r+=el;
		}
		else
		{
			str_r+=str[i];
		}
	
	}
	return str_r;
}

std::string toUpper(std::string str)
{
	std::string str_r="";
	for(int i=0;i<str.size();i++)
	{
		char a=str[i];
		int dig=a;
		if(dig>=97 && dig<=122)
		{
			dig-=32;
			char el=dig;
			str_r+=el;
		}
		else
		{
			str_r+=str[i];
		}
	
	}
	return str_r;
}*/
//13
/*std::string toLower(std::string);
int check_c(std::string,std::string);
int main()
{
	std::string str;
	std::string str1;
	std::cout<<"Enter str-";
	std::cin>>str;
	std::cout<<"Enter str1-";
	std::cin>>str1;
	str=toLower(str);
	str1=toLower(str1);
	int count;
	if(str1.size()==str.size()){
		count=check_c(str,str1);
	}
	else
	{	
		std::cout<<"Strings is not anagram"<<std::endl;
		return 0;
	}
	if(count==str.size())
	{
		std::cout<<"Strings is anagram"<<std::endl;
	}
	else
	{
		std::cout<<"Strings is not anagram"<<std::endl;
	}
	return 0;	
}
std::string toLower(std::string str)
{
        std::string str_r="";
        for(int i=0;i<str.size();i++)
        {
                char a=str[i];
                int dig=a;
                if(dig>=65 && dig<=90)
                {
                        dig+=32;
                        char el=dig;
                        str_r+=el;
                }
                else
                {
                        str_r+=str[i];
                }
        
        }
        return str_r;
}
int check_c(std::string s1,std::string s2)
{
	int count=0;
	for(int i=0;i<s2.size();i++)
	{
		for(int k=0;k<s1.size();k++)
		{
			if(s2[i]==s1[k])
			{
				count+=1;
				char a=s1[k];
				int e=a;
				char es=a-32;
				s1[k]=es;
			}
		}
	}
	std::cout<<s1<<std::endl;
	std::cout<<s2<<std::endl;
	return count;
}*/


//14
/*bool  find(std::string,std::string);
int main()
{
	std::string str;
	std::string str1;
	std::cout<<"Enter string1-";
	std::getline(std::cin, str);
	std::cout<<"Enter string2-";
	std::cin>>str1;
	bool arr=find(str,str1);
	if(arr)
	{
		std::cout<<"True"<<std::endl;
	}
	else
	{
		std::cout<<"False"<<std::endl;
	}
	return 0;
}

bool find(std::string s1,std::string s2)
{
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]==s2[0])
		{
				//std::cout<<"hello wolrd"<<std::endl;
				std::string el="";
				int ind=0;
				for(int k=i;k<i+s2.size();k++)
				{
					if(s1[k]!=s2[ind])
					{
						break;
					}
					else
					{
						el+=s1[k];
						//std::cout<<el<<std::endl;
					}
					ind+=1;
				if(el==s2)
				{	
					//std::cout<<"Havasareen";
					return true;
				}
				}
			
			}
		
	}

		
	return false;
}*/

//15

/*int main()
{
	std::string str;
	std::cout<<"Enter string-";
	std::getline(std::cin, str);
	std::string new_str="";
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='a')
		{
			new_str+="ab";
		}
		else
		{
			new_str+=str[i];
		}
	}
	std::cout<<new_str<<std::endl;
	return 0;
}*/

//16
/*int main()
{
	std::string str;
	std::cout<<"Enter string-";
	std::getline(std::cin, str);
	std::string str1="";
	int ind=0;
	while(ind<str.size())
	{
		if(str[ind]==str[ind+1])
		{
			str1+=str[ind];
			ind=ind+2;	
		}
		else
		{
			str1+=str[ind];
			ind++;
		}
	}
	std::cout<<str1<<std::endl;
	return 0;

}*/
