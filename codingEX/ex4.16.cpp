#include <iostream>
using namespace std;

void main()
{
	goto TARGET; //target 이릅붙은 레이블로 이동
	cout << "Start" << endl; // 실행x

TARGET:
	cout << "Target" << endl;
}