#include <iostream>
using namespace std;

void main()
{
	char* pC = NULL;
	int* pI = NULL;
	double* pD = NULL; //NULL�� �ʱ�ȭ - �޸��ּ� 0���� ��� ����

	cout << (void*)(pC + 1) << endl;
	cout << (void*)(pI + 1) << endl;
	cout << (void*)(pD + 1) << endl;  //pC pD pI �� �޸��ּ� 1���� �ּҰ� ���, cout��� �޸� �ּ� ��� �� ������Ÿ������ ��ȯ�� �ʿ��Ͽ� void*
} 