#include <iostream>
using namespace std;

void Set(char* r)
{
	*(r + 0) = 'C';
	*(r + 1) = '+';
	*(r + 2) = '+';
	*(r + 3) = '\0';
	
}

void main()
{
	int a = 0;
	char* s = (char*)&a;

	Set(s);
	cout << (char*)&a << endl;
}