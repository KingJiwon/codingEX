//함수호출 예제
#include <iostream>
using namespace std;

void Mod(int, int); //함수 선언시 인자의 이름 생략 가능

void Sub(int arg, int m)
{
	Mod(arg - m, m);
}

void Mod(int arg, int m)
{
	if (arg < m)
	{
		cout << arg << endl;
	}
	else
	{
		Sub(arg, m);
	}
}

void main()
{
	Mod(11, 3);
}