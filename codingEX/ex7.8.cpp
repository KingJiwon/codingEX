#include <iostream>
using namespace std;

typedef struct
{
	char c;
	int i;
}SType;

void main()
{
	cout << sizeof(SType) << endl; // 1����Ʈ�� c 4����Ʈ�� i 3����Ʈ�� pading
}