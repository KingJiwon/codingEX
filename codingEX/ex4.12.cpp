#include <iostream>
using namespace std;

void main()
{
	int Sum = 0;
	int i = 0;

	do
	{
		Sum += i;
		i++;
	} while (i < 11);

	cout << Sum << endl;
}