#include <iostream>
using namespace std;

int Func(int arg)
{
	return arg;
}

double Func(int arg)
{
	return (double)arg;
}
//인자열이 같고 반환타입만 다른경우 중복정의 불가능

void main()
{
	Func(1);
}