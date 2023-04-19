#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <ctime>
#include <fstream>
bool check_file_exist( std::string );
bool check_is_digit( std::string str );
int sum_digit_number( int n );
int main (int argc,char* argv[] )
{	
        int n;
        std::string n1;
        int s;
	if ( argc==1)
	{
        	std::cout << "Enter number-";
       		std::cin >> n1;
        	if ( check_is_digit(n1) )
        	{
                	n = stoi(n1);
        	}
        	else
        	{
                	std::cout << "PLEASE input number.." << std::endl;
                	return 1;
        	}
       		s = sum_digit_number( n );
		std::cout<<s<<std::endl;
		return 0;
	}
	else if ( std::string(argv[1])=="-t" )
	{
		if( check_file_exist("args.txt") )
		{
			std::ifstream file_a;
			std::ofstream file_r;
			if( !check_file_exist("returns.txt") )
			{
				return 1;
			}
			file_a.open("args.txt");
			file_r.open("returns.txt");
			std::string line;
			while( !file_a.eof() )
			{	
				line = "";		
				file_a >> line;
				if( line.size() == 0 )
				{
					continue;
				}
				if( check_is_digit(line) )
				{	
					n = stoi(line);
					s = sum_digit_number(n);
					file_r << s << std::endl;
				}
				else
				{
					file_r << "error" << std::endl;	
				}

			}
				file_a.close();
				file_r.close();
		
		}
		else
		{
			return 1;
		}
	}
	else 
	{
		std::cout<<"work mode does not exist"<<std::endl;
		return 1;
	
	}
        return 0;
}
bool check_is_digit(std::string str)
{
        bool a = true;
	int count=0;
        if (str[0] == '-' )
        {
               a = true;
               count++;
        }
        for ( int i = count;i<str.size();i++)
        {
                if ( !isdigit(str[i]) )
                {
                        a = false;
                        return a;

                }

        }
        return a;
}

int sum_digit_number( int n )
{
	int s = 0;
	while	(n != 0 )
        {
                int l = n%10;
                n = n / 10;
                s += l;
        }
        int m = s;
        s = abs(m);
	return s;
}
bool check_file_exist(std::string filename)
{
    std::ifstream file;
    file.open(filename);
    if (file)
    {
	file.close();
	return true;
    }
    else
    {
	std::cout << "File-"<<filename<<" does not exists" << std::endl;
	file.close();
	return false;
    }

}
