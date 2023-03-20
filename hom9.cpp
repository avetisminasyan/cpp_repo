#include <iostream>
#include <cstring>
/*int devide(int*,int,int);
int main()
{
	int arr[10]={1,2,5,8,15,22,27,31,34,38};
	std::cout<<"Enter number-";
	int num;
	std::cin>>num;
	int a=devide(arr,10,num);
	if(a!=-1)
	{
		std::cout<<"NUM in arr"<<std::endl;
	}
	else
	{
		std::cout<<"NUM not in arr"<<std::endl;
	}
	return 0;
	
}
int devide(int* array,int count,int num)
{	
	int devides;	
	if(array[0]==num )
	{	
	//	std::cout<<"find element"<<std::endl;
		devides=0;
		return devides;

	}
	else if(array[count-1]==num)
	{
	//	std::cout<<"find element last element"<<std::endl;
		devides=count;
		return devides;
	}
	if(count<2)
	{	
		devides=-1;
		return devides;
	}
	else
	{
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
		if(num>=half_arr2[0])
		{	
	//		std::cout<<"half2"<<std::endl;
			devides=devide(half_arr2,half2,num);
		}
		else if(num<=half_arr2[0])
		{
	//		std::cout<<"half1"<<std::endl;
			devides=devide(half_arr,half1,num);
		}

	}
	return devides;
}*/
/*int find_el_ind(int*,int st,int end,int num);
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int num;
	std::cin>>num;
	int ind=find_el_ind(arr,0,10,num);
	std::cout<<ind<<std::endl;
	return 0;

}
int find_el_ind(int* arr,int st,int end,int num)
{
	int els;
	if(arr[st]==num)
	{	
		els=st;
		return els;
	}
	else if(arr[end-1]==num)
	{	
		els=end-1;
		return els;
	}
	else if((end-st)<2)
	{	
		els=-1;
		return els;
	}
	else
	{
		int mid=(st+end)/2;
		if(num>=arr[mid])
		{
			els=find_el_ind(arr,mid,end,num);
	
		}
		else if(num<=arr[mid])
		{	
			els=find_el_ind(arr,st+1,mid,num);
		}
	}
	return els;
}*/
