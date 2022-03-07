#include <iostream>
using namespace std;

double Multiply(double a, double b)
{
	return a * b;
}
// 함수 호출하기 전 먼저 정의해주거나 선언해주어야 한다.
void main()
{
	double Result = Multiply(3.3, 7.7);
	cout << Result << endl;
}