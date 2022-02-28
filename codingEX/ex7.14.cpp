#include <iostream>
using namespace std;

typedef union
{
	int a;
	int b;
	int c;
}UType;

void main()
{
	UType u;
	u.a = 1;

	cout << u.b << endl;
	cout << u.c << endl;
}
// 공용체(union)은 멤버들이 같은 메모리영역을 공유