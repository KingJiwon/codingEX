//�Լ��� ��������
#include <iostream>
using namespace std;

void Increment(int& arg) //�Ű����� Ÿ���� �ּҿ����� ���� ����Ÿ��
{
	arg++;
}

void main()
{
	int i = 3;
	Increment(i);
	cout << i << endl;
}

// ����Ÿ�� �Ű������� ���� arg�� i�� ���� �ƴ϶� i �� ��ü�� �Ѿ�� �� >> ����ϱ� ��