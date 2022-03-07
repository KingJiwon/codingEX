//상수 참조타입
#include <iostream>
using namespace std;

int Add(const int& a, const int& b)
{
	return a + b;
}

void main()
{
	int a = 1;
	int b = 2;

	cout << Add(a, b) << endl;
	cout << Add(1, 2) << endl; //상수 참조타입을 사용했기 때문에 변수와 더불어 상수또한 실인자로 넘길 수 있다.
}