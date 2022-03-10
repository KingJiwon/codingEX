#include <iostream>
using namespace std;

void Func(int* arg)
{
	cout << "int*" << endl;
}

void Func(const int* arg)
{
	cout << "const int*" << endl;
}

void main()
{
	int a = 1;
	Func(&a);

	const int ca = 1;
	Func(&ca);
}
// 함수중복 정의 관점에서 TYPE*과 const TYPE* 은 다른것으로 취급