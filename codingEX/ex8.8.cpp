//함수의 값 전달
#include <iostream>
using namespace std;

void Increment(int arg)
{
	arg++;
}

void main()
{
	int i = 3;
	Increment(i);
	cout << i << endl;
}

// i의값이 복사되어 매개변수에 arg에 들어갈 뿐이므로 실인자 i에는 어떠한 영향도 끼치지 않음