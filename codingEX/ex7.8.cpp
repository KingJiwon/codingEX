#include <iostream>
using namespace std;

typedef struct
{
	char c;
	int i;
}SType;

void main()
{
	cout << sizeof(SType) << endl; // 1바이트의 c 4바이트의 i 3바이트의 pading
}