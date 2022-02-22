#include <iostream>
using namespace std;

void Set(int** s, int d)
{
	**s = d;
}

void main()
{
	int a;
	int* p = &a;
	int** pp = &p;

	Set(pp, 3);
	cout << a << endl;
}