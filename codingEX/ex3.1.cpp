#include <iostream>
using namespace std;

void main()
{
	int a, b;

	a = 1;
	cout << ++a << endl; //전위형 : 먼저 a를 1 증가시킨후 a를 반환

	a = 1;
	b = ++a;
	cout << b << endl;  

	a = 1;
	cout << a++ << endl; //후위형 : a를 먼저 반환한 후에 a를 1 증가시킨다.

	a = 1;
	b = a++;
	cout << b << endl;

	a = 1;
	++a;
	cout << a << endl; // 전위형, 후위형이 단독으로 사용될 경우 a는 1증가되므로 2출력

	a = 1;
	a++;
	cout << a << endl;


}