//�Լ�ȣ�� ����
#include <iostream>
using namespace std;

void Mod(int, int); //�Լ� ����� ������ �̸� ���� ����

void Sub(int arg, int m)
{
	Mod(arg - m, m);
}

void Mod(int arg, int m)
{
	if (arg < m)
	{
		cout << arg << endl;
	}
	else
	{
		Sub(arg, m);
	}
}

void main()
{
	Mod(11, 3);
}