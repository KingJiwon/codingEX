#include <iostream>
using namespace std;

int Capital(int a)
{
	int b = a % 2;
	return b ? 1 : 0;
}

void main()
{
	cout << "������ �Է��ϼ���." << endl;
	int c;
	cin >> c;
	if (Capital(c) == 0)
	{
		cout << "¦�� �Դϴ�." << endl;
	}
	else
	{
		cout << "Ȧ�� �Դϴ�." << endl;
	}
}