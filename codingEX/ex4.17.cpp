#include <iostream>
using namespace std;

void main()
{
	int Sum = 0;

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			Sum += j;

			if (Sum > 1000)
			{
				cout << i << " : " << Sum << endl;
				goto EXIT;
			}
		}	
	}
EXIT:
	cout << "End" << endl;
}