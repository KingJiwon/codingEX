#include <iostream>
using namespace std;
void Func(int* arg)
{
	cout << "int*" << endl;
}

void Func(int* const arg)
{
	cout << "int* const" << endl;
}

void main()
{
	int a = 1;
	Func(&a);
}

// int* 과 int* const 같은 인자로 취급