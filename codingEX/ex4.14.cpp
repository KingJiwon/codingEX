#include <iostream>
using namespace std;

void main()
{
	for (int i = 2; i < 10; i++)
	{
		int j = 1;
		while (1)
		{
			cout << i << "*" << j << "=" << i * j << endl;
			j++;
			if (j > 9)
				break;
		}
		cout << endl; // 한줄 띄어쓰기
	}
}