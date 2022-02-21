#include <iostream>
using namespace std;

void main()
{
	int* pI = NULL;
	double* pD = NULL;

	cout << (void*)((char*)pI + 1) << endl;
	cout << (void*)((char*)pD + 1) << endl; //1바이트 단위로 증가시키기위해 캐스트연산자(char*)적용
}