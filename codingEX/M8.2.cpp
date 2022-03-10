#include <iostream>
using namespace std;

int Absolute(int& m)
{
	;
	if (m < 0)
	{
		m = -m;
	}
	else
	{
		m = m;
	}
	return m;
}

void main()
{
	int a = 3;
	int b = -5;

	Absolute(a);
	Absolute(b);

	cout << a << endl;
	cout << b << endl;
}