#include <iostream>
using namespace std;

void main()
{
	char c;
	int i;

	//char* pC = &i; Error
	char* pC = &c;
	
	//int *pI = &c; Error
	int* pI = &i;

	//주소 연산자로 임시포인터 도출 시 포인터의 대상 타입은 객체 타입이 된다.
}