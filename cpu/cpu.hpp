#include <vector>
class Ram
{
        public:
                void write(int ind,int value);
                int read(int ind);
                int ram_size();
		void resize(int count);
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
class Alu
{
	public:
		void execute(Ram& ram,Register& reg);
};
class CU
{
        public:
                void run(Ram& ram,Register& reg,Alu& alu);
                void fetch(Ram& ram,Register& reg,int ind);
                void decode(int value,Register& reg,Ram& ram,int size);
                void execute(Ram& ram,Register& reg,Alu& alu);
};
class CPU
{
        public:
                void load(std::vector<int> arr);
		void state(int num1,int num2);
                void execute();
		void print();
	private:
		Ram ram;
		CU cu;
		Register reg;
		Alu alu;
};          
