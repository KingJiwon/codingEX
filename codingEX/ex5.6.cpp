#include <iostream>
using namespace std;

void main()
{
	char c;
	int i;

	//char* pC = &i; Error
	char* pC = &c;
	
	//int *pI = &c; Error
	int* pI = &i;

	//�ּ� �����ڷ� �ӽ������� ���� �� �������� ��� Ÿ���� ��ü Ÿ���� �ȴ�.
}