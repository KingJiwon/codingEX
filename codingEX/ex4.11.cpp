#include <iostream>
using namespace std;

void main()
{
	int Sum = 0;
	int i = 0;

	while (i < 11)
	{
		Sum += i;
		i++;
	}
	cout << Sum << endl;
}