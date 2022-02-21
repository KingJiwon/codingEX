#include <iostream>
using namespace std;

class CTest
{
	char arr[16]; //char 요소가 16개모여있는 16바이트의 멤버
};

void main()
{
	CTest t;

	CTest* pT = &t; //pT에 t의 주소 대입
	cout << pT << endl;

	pT++;
	cout << pT << endl; //16바이트씩 커짐

	pT++;
	cout << pT << endl;
}