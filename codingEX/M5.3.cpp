#include <iostream>
using namespace std;

int increment(int& a)
{
	int* p = &a;
	*p = *p + 1;
	return a;
}
void main()
{
	int a = 2;
	increment(a);
	cout << a << endl;
}
