#include <iostream>
using namespace std;

void Func(int arg)
{
	cout << "Value" << endl;
}

void Func(int& arg)
{
	cout << "Reference" << endl;
}

void main()
{
	Func(1);

	int a = 1;
	Func(a); //Error


	//���ڷ� ���� a���ѱ�µ� ���� �ѱ�� ������ ������ü a���ѱ�°����� ���� �� ������ ����