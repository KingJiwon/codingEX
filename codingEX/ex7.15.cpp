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
	cout << sizeof(u) << endl; //����ü�� ũ��� ũ�Ⱑ ���� ū ��� ��������������. 
}