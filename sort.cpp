#include <iostream>
#include <cstring>
int arr[8]={8,5,2,7,6,10,1,3};
bool check_is(int);
int* devide(int*,int);
int* sort(int* ,int* );
int main()
{
	int array[8]={8,5,2,7,6,10,1,3};
	int* p=devide(array,8);
	for(int i=0;i<8;i++)
	{
		std::cout<<p[i]<<",";
	}
	std::cout<<std::endl;
	return 0;
}
int* devide(int* array,int count)
{	
	if(count==1)
	{
		return array;
	}	
	int half1;
	int half2;
	if(count%2==0)
	{
		half1=count/2;
		half2=count/2;
	}
	else if(count%2!=0)
	{
		half1=(count/2)+1;
		half2=count/2;
	}
	int c_el=0;
	int* half_arr=new int [half1];
	int* half_arr2=new int [half2];
	for(int i=0;i<half1;i++)
	{	
		half_arr[i]=array[i];
		c_el++;
	}
	for(int i=0;i<half2;i++)
	{
		half_arr2[i]=array[c_el];
		c_el++;
	}	
	int* arr1=devide(half_arr,half1);
	int* arr2=devide(half_arr2,half2);
	return sort(arr1,arr2);
}
int* sort(int* array1, int* array2)
{	//std::cout<<"sort function"<<std::endl;
	int half1_c=0;
	int half2_c=0;
	int* array11=array1;
	int* array22=array2;
	while(true)
	{
		if(check_is(*array11))
		{
			half1_c+=1;
			array11++;
		}
		else
		{
			break;
		}

	}
	while(true)
	{
		if(check_is(*array22))
		{
			half2_c+=1;
			array22++;
		}
		else
		{
			break;
		}

	}

	int i=0;
	int j=0;
	//int c_1=sizeof(array1)/sizeof(int*);
	//int c_2=sizeof(array2)/sizeof(int*);
	int* array3=new int[half1_c+half2_c];
	int array3_i=0;
	while(i<half1_c && j<half2_c)
	{
		if(array1[i]<array2[j])
		{
			array3[array3_i]=array1[i];
			i++;
			array3_i+=1;
		}
		else
		{
			array3[array3_i]=array2[j];
			j++;
			array3_i+=1;
		}
		
	}
	//std::cout<<"heloo"<<std::endl;
	while (j<half2_c)
	{
		array3[array3_i]=array2[j];
		j++;
		array3_i++;
	}
	while(i<half1_c)
	{
		array3[array3_i]=array1[i];
		i++;
		array3_i++;
	}
	half1_c+=1;
	half2_c+=1;
	return array3;
}
bool check_is(int num)
{
	for(int i=0;i<8;i++)
	{
		if (num==arr[i])
		{
			return true;
		}
	}
	return false;
	
}
/*int main()
{
	int array[7]={5,1,7,3,4,5,6};
	for(int i=1;i<9;i++)
	{	
		while(array[i-1]>array[i] && i>0)
		{	
			int el=array[i];
			array[i]=array[i-1];
			array[i-1]=el;	
			i-=1;
		}
	}
	for(int i=0;i<7;i++)
	{
		std::cout<<array[i]<<",";
	}
	return 0;
}*/

