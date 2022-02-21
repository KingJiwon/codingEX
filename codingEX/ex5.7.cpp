#include <iostream>
using namespace std;

void main()
{
	char* pC = NULL;
	int* pI = NULL;
	double* pD = NULL; //NULL로 초기화 - 메모리주소 0으로 모두 저장

	cout << (void*)(pC + 1) << endl;
	cout << (void*)(pI + 1) << endl;
	cout << (void*)(pD + 1) << endl;  //pC pD pI 에 메모리주소 1더한 주소값 출력, cout경우 메모리 주소 출력 시 포인터타입으로 변환이 필요하여 void*
} 