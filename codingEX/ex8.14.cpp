#include <iostream>
using namespace std;

int Sum(int a = 0, int b = 0, int c = 0) // 오른쪽부터 기본인자 지정
{
	return a + b + c;
}

void main()
{
	cout << Sum(1, 2, 3) << endl;
	cout << Sum(1, 2) << endl;
	cout << Sum(1) << endl;
	cout << Sum() << endl; //오른쪽부터 생략 가능
}
