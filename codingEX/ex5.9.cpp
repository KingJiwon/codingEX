#include <iostream>
using namespace std;

class CTest
{
	char arr[16]; //char ��Ұ� 16�����ִ� 16����Ʈ�� ���
};

void main()
{
	CTest t;

	CTest* pT = &t; //pT�� t�� �ּ� ����
	cout << pT << endl;

	pT++;
	cout << pT << endl; //16����Ʈ�� Ŀ��

	pT++;
	cout << pT << endl;
}