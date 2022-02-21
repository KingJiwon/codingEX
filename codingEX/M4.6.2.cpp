#include <iostream>
using namespace std;

float AV(int x)
{
	if (x == 1)
	{
		return (float)(0 + 4) / 2;
	}
	else if (x == 2)
	{
		return (float)(4 + 11) / 2;
	}
	else if (x == 3)
	{
		return (float)(11 + 23) / 2;
	}
	else if (x == 4)
	{
		return (float)(23 + 40) / 2;
	}
	else if (x == 5)
	{
		return (float)(40 + 60) / 2;
	}
	else if (x == 6)
	{
		return (float)(60 + 77) / 2;
	}
	else if (x == 7)
	{
		return (float)(77 + 89) / 2;
	}
	else if (x == 8)
	{
		return (float)(89 + 96) / 2;
	}
	else if (x == 9)
	{
		return (float)(96 + 100) / 2;
	}

}

void main()
{
	int a;
	cout << "표준 등급을 입력하세요!" << endl;
	cin >> a;
	cout << "평균 " << AV(a) << "등입니다." << endl;
}