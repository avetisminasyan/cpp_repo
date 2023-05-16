#include <iostream>
#include "cpu.hpp"
void Ram::write(int ind,int value)
{
	arr[ind] = value;
}
int Ram::read(int ind)
{
     return arr[ind];
}
int Ram::ram_size()
{
    return arr.size();
}
void Ram::resize(int count)
{
	arr.resize(count);	
}		
void Register::write(int ind,int value)
{
	arr[ind] = value;
}
int Register::read(int ind)
{
	return arr[ind];
}
int Register::reg_size()
{
        return arr.size();
}
void Alu::execute(Ram& ram,Register& reg)
{
        switch(reg.read(4))
        {
        	case 0:
                         ram.write(reg.read(3),reg.read(5)+reg.read(6));
                         break;
                case 1:
                         ram.write(reg.read(3),reg.read(5)-reg.read(6));
                         break;
                case 2:
                         ram.write(reg.read(3),reg.read(5)/reg.read(6));
                         break;
                case 3:
                         ram.write(reg.read(3),reg.read(5)*reg.read(6));
                         break;
        }
}
void CU::run(Ram& ram,Register& reg,Alu& alu)
{
	int ins_c = ((ram.ram_size()-2)/2);	
	for(int i = 0;i < ins_c;i++)
	{
		fetch(ram,reg,i);
		decode(reg.read(0),reg,ram,ins_c);
		execute(ram,reg,alu);
	}
}
void CU::fetch(Ram& ram,Register& reg,int ind)
{
	reg.write(0,ram.read(ind));
}
void CU::decode(int value,Register& reg,Ram& ram,int size)
{
	for(int i = 1;i < 5;i++)
	{
		int a = value & 15;
		reg.write(i,a);
		value = value >> 4;
	}
		reg.write(5,ram.read(size));
		reg.write(6,ram.read(size+1));
}
void CU::execute(Ram& ram,Register& reg,Alu& alu)
{
	alu.execute(ram,reg);
}		
void CPU::load(std::vector<int> arr)
{
	ram.resize((arr.size()*2)+2);
	for(int i = 0;i < arr.size();i++)
	{
		ram.write(i,arr[i]);
	}
}
void CPU::state(int num1,int num2)
{
	int c = ((ram.ram_size()-2)/2);
        ram.write(c,num1);
        ram.write(c+1,num2);
}
void CPU::execute()
{
	cu.run(ram,reg,alu);
}
void CPU::print()
{
	int st = (((ram.ram_size()-2)/2)+2);
	for(int i = st;i < ram.ram_size();i++)
	{
		std::cout << ram.read(i) << std::endl;
	}
			
}
