#include <iostream>
using namespace std;
void main()
{
	char c; // ��ȣ�ִ� ����
	c = 2; // 0000 0010
	c = c >> 1; // 0000 0001
	cout << +c << endl;

	c = -126;   // 1000 0010
	c = c >> 1; // 1100 0001
	cout << +c << endl;
}