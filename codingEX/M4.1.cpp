#include <iostream>
using namespace std;

void main()
{
	__int64 a;
	cout << "정수를 입력하세요" << endl;
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "짝수입니다" << endl;
	}
	else if (a % 2 != 0)
	{
		cout << "홀수입니다" << endl;
	}
	
}