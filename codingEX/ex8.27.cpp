#include <iostream>
using namespace std;

void Func(char* arg)
{
	cout << "char*" << endl;
}

void Func(const char* arg)
{
	cout << "const char*" << endl;
}

void main()
{
	char* p = "A";
	Func(p);

	Func("B"); // const char* 타입으로 정의
}