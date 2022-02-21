#include <iostream>
using namespace std;

void main()
{
	int a;
	int& ra = a; //참조타입 변수를 정의할 때는 반드시 바로 초기화를 해야함 (초기화 > 변수 ra와 a의 메모리 영역을 공유함)

	ra = 1;

	cout << a << endl;
}