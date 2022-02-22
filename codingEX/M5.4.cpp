#include <iostream>
using namespace std;

void* MyMemset(void* b, int c, size_t d)
{
	char* temp = (char*)b;
	for (int i = 0; i < d; i++)
	{
		*(temp + i) = c;
	}
	return b;
}

void main()
{
	int a;
	MyMemset(&a, -1, 4);
	cout << a << endl;
}