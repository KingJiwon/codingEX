#include <iostream>
using namespace std;

void main()
{
	int a, b;

	a = 1;
	cout << ++a << endl; //������ : ���� a�� 1 ������Ų�� a�� ��ȯ

	a = 1;
	b = ++a;
	cout << b << endl;  

	a = 1;
	cout << a++ << endl; //������ : a�� ���� ��ȯ�� �Ŀ� a�� 1 ������Ų��.

	a = 1;
	b = a++;
	cout << b << endl;

	a = 1;
	++a;
	cout << a << endl; // ������, �������� �ܵ����� ���� ��� a�� 1�����ǹǷ� 2���

	a = 1;
	a++;
	cout << a << endl;


}