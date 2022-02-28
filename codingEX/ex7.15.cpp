#include <iostream>
using namespace std;

typedef union
{
	__int64 a;
	int b;
}UType;

void main()
{
	UType u;
	u.a = 1;

	cout << u.b << endl;
	cout << sizeof(u) << endl; //공용체의 크기는 크기가 가장 큰 멤버 기준으로정해짐. 
}