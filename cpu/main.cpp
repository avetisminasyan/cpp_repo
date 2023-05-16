#include "cpu.hpp"
#include <vector>

int main()
{
	std::vector<int> arr = {1605,5957,10309,14661};
	CPU cpu;
       	cpu.load(arr);
	cpu.state(15,15);
       	cpu.execute();
       	cpu.print();
	return 0;
}
