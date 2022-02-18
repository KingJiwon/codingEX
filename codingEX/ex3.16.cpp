#include <iostream>
using namespace std;

void main()
{
	int a = 0;
	cout << ~ ! ++a << endl; // -1
	
	int b = a += 1;
	cout << b << endl; // 2
}