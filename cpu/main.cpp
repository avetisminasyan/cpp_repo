#include "cpu.hpp"
#include <vector>
int main()
{
	std::vector<int> arr = {1605,5701,9797,13893};
	CPU cpu;
       	cpu.load(arr,15,15);
       	cpu.execute();
       	cpu.print();
	return 0;
}
