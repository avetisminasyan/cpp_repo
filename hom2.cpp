#include <iostream>
#include <string>

/*int main ()
{
	std::string s1;
	std::cout<<"Input string-";
	std::getline(std::cin,s1);
	std::string maxl_st="";
	std::string minl_st="";
	std::string str="";
	std::string st1="";
	int ind=0;
	for(int i=0;i<s1.size();i++)
	{

		if (s1[i]!=' ')
		{
			str+=s1[i];
			st1+=s1[i];
		}
		else if (s1[i] == ' ')
		{
			if(ind==0){
				minl_st=st1;
				ind+=1;
			}
			if (maxl_st.size()<str.size())
			{
				maxl_st=str;
				str="";

			}
			if(minl_st.size()>st1.size())
			{
				minl_st=st1;
				st1="";
				}

		}


	}
	if (str.size()>maxl_st.size())
	{
		maxl_st=str;
		str="";
	}
	if(st1.size()<minl_st.size())
	{
		minl_st=st1;
		st1="";

	}
	//std::cout<<maxl_st<<std::endl;
	//std::cout<<minl_st<<std::endl;
	std::string all="";
	for (int i=0;i<minl_st.size();i++)
	{
		for(int e=0;e<maxl_st.size();e++)
		{
			if(minl_st[i]==maxl_st[e])
			{
				int els=0;
				for(int t=0;t<all.size();t++)
				{
					if(all[t]==maxl_st[e])
					{
						els+=1;
						break;



					}

				}
				if (els==0)
				{
					all+=maxl_st[e];

				}

			}

		}


	}
	std::cout<<"Yndhanur simvolner-";
	std::cout<<all<<std::endl;
	std::cout<<std::endl;
	return 0;
}*/

