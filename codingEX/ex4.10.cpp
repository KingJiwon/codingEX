#include <iostream>
using namespace std;

void main()
{
	int Sum = 0;
	int i = 0;

	for (;;)
	{
		Sum += i;
		i++;

		if (i > 10)
			break;
	}
	cout << Sum << endl;
}