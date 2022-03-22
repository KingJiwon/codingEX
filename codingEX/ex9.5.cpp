#include <iostream>
using namespace std;

class CTest
{
public:
	CTest() : m_C1(1)
	{

	}

	const int m_C1; // 초기화 리스트를 이용하여 초기화
	const int m_C2 = 2; //클래스 내부 초기화
};

void main()
{
	CTest t;
	cout << t.m_C1 << " " << t.m_C2 << endl;
}