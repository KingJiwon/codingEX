#include <iostream>
using namespace std;

void main()
{
	int a;
	int& ra = a; //����Ÿ�� ������ ������ ���� �ݵ�� �ٷ� �ʱ�ȭ�� �ؾ��� (�ʱ�ȭ > ���� ra�� a�� �޸� ������ ������)

	ra = 1;

	cout << a << endl;
}