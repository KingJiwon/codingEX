#include <iostream>
using namespace std;

class CTest
{
public:
	CTest() : m_C1(1)
	{

	}

	const int m_C1; // �ʱ�ȭ ����Ʈ�� �̿��Ͽ� �ʱ�ȭ
	const int m_C2 = 2; //Ŭ���� ���� �ʱ�ȭ
};

void main()
{
	CTest t;
	cout << t.m_C1 << " " << t.m_C2 << endl;
}