//�Լ��� �ּ�����
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
// i�� �ּҰ��� �Ű������� �����߱� ������ i���� �ٲ�.