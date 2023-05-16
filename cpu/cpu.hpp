#include <vector>
class Ram
{
        public:
                void write(int ind,int value);
                int read(int ind);
                int ram_size();
        private:
                std::vector<int> arr;


};
class Register
{
        public:
                void write(int ind,int value);
                int read(int ind);
                int reg_size();
        private:
                std::vector<int> arr{7};
};
class CU
{
        public:
                void run(Ram& ram,Register& reg);
                void fetch(Ram& ram,Register& reg,int ind);
                void decode(int value,Register& reg,Ram& ram,int size);
                void execute(Ram& ram,Register& reg,int ind);
};
class CPU
{
        public:
                void load(std::vector<int> arr,int num1,int num2);
                void execute();
		void print();
	private:
		Ram ram;
		CU cu;
		Register reg;
};
~          
