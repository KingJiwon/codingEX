// 블록사용의 중요성
#include <iostream>
using namespace std;

#define SWAP(a, b) a^=b; b^=a; a^=b;

void main()
{
	int a = 0;
	int b = 1;

	if (0)
		SWAP(a, b);

	cout << a << " " << b << endl;
}