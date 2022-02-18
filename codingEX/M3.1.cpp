#include <iostream>
using namespace std;

int Capital(int a)
{
	int b = a % 2;
	return b ? 1 : 0;
}

void main()
{
	cout << "정수를 입력하세요." << endl;
	int c;
	cin >> c;
	if (Capital(c) == 0)
	{
		cout << "짝수 입니다." << endl;
	}
	else
	{
		cout << "홀수 입니다." << endl;
	}
}