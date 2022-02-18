#include <iostream>
using namespace std;

int NOT(int a)
{
	return a ? 0:1;
}


void main()
{
	cout << NOT(0) << endl;
	cout << NOT(1) << endl;
}