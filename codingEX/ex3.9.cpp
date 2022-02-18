#include <iostream>
using namespace std;

void main()
{
	char c = 1;

	c = c << 7;
	cout << +c << endl;

	c = c >> 7;
	cout << +c << endl;

}