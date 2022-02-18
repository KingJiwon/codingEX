//short - circuit
#include <iostream>
using namespace std;

int Func()
{
	cout << "Func" << endl;
	return 1;
}

void main()
{
	if (0 && Func())
	{
		cout << "main" << endl;
	}
}