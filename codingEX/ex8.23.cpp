#include <iostream>
using namespace std;

int Func(int arg)
{
	return arg;
}

double Func(int arg)
{
	return (double)arg;
}
//���ڿ��� ���� ��ȯŸ�Ը� �ٸ���� �ߺ����� �Ұ���

void main()
{
	Func(1);
}