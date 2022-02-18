#include <iostream>
using namespace std;

void main()
{
	int a = 0;

	if (a = 1) // a==1 이아닌 대입식 a=1, 비교연산 식이 아님
	{
		cout << "a == 1" << endl;
	}
	else
	{
		cout << "a != 1" << endl;
	}
}