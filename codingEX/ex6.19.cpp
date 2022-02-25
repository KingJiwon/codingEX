#include <iostream>
using namespace std;

void func(int arg[2][3]) // 매개변수 int arr[2][3]은 타입이 int[3]인 포인터 즉 int(*arg)[3]으로 치환
{
	arg[1][2] = 1;
}

void main()
{
	int arr[2][3] = { {0} };
	func(arr);
	cout << arr[1][2] << endl;
}