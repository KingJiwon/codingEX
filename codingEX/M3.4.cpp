#include <iostream>
using namespace std;
#define MAX 10000
int JIWON(int a)
{
	int i = 0;
	while (a != 0)
	{
		a = a / 10;
		++i;
	}
	return i;
}

void main()
{
	int c;
	cout << "10,000���� ���� ������ �Է��ϼ���" << endl;
	cin >> c;

	c < MAX
		? (cout << c << "��(��) " << JIWON(c) << "�ڸ����Դϴ�." << endl)
		: (cout << "10,000������ ������ �Է��ϼ���." << endl);
}