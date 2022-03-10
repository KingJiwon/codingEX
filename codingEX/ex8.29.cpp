#include <iostream>
using namespace std;

void Func(int arg)
{
	cout << "Value" << endl;
}

void Func(int& arg)
{
	cout << "Reference" << endl;
}

void main()
{
	Func(1);

	int a = 1;
	Func(a); //Error


	//인자로 변수 a를넘기는데 값을 넘기는 것인지 변수자체 a를넘기는것인지 구분 할 수없기 때문