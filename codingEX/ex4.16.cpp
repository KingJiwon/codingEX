#include <iostream>
using namespace std;

void main()
{
	goto TARGET; //target �̸����� ���̺�� �̵�
	cout << "Start" << endl; // ����x

TARGET:
	cout << "Target" << endl;
}