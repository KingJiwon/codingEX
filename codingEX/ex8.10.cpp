//함수의 참조전달
#include <iostream>
using namespace std;

void Increment(int& arg) //매개변수 타입이 주소연산자 사용된 참조타입
{
	arg++;
}

void main()
{
	int i = 3;
	Increment(i);
	cout << i << endl;
}

// 참조타입 매개변수에 의해 arg에 i의 값이 아니라 i 그 자체가 넘어가게 됨 >> 사용하기 편리