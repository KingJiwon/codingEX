#include <iostream>
using namespace std;

int NOT(int arg)
{
	return arg ? 0 : 1; // arg�� 0�̾ƴѰ��(��) 0����ȯ 0�ΰ��(����) 1����ȯ
}

void main()
{
	cout << NOT(3) << " " << NOT(0) << endl;
}