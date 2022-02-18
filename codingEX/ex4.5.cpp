#include <iostream>
using namespace std;

int Add(int a, int b)
{
	return a + b;
}

void main()
{
	int a, b;

	switch (Add(1, 2))
	{
	case 0:
	case 1:
	case 2:
	case 3:
		a = 3;
		b = 7;
		if (1)
			cout << Add(a, b) << endl;
	case 4:
		a = 30;
		b = 70;
		if (1)
			cout << Add(a, b) << endl;

	}

}