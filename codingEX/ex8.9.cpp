//함수의 주소전달
#include <iostream>
using namespace std;

void Increment(int* pArg)
{
	(*pArg)++;
}

void main()
{
	int i = 3;
	Increment(&i);
	cout << i << endl;
}
// i의 주소값을 매개변수로 복사했기 때문에 i값이 바뀜.