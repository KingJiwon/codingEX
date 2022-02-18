#include <iostream>
using namespace std;

void main()
{
	int a = 3;
	int b = 7;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << a << " " << b << endl;
}