#include <iostream>
using namespace std;

void main()
{
	unsigned char uc;

	uc = 2;   // 0000 0010
	uc = uc >> 1; // 0000 0001
	cout << +uc << endl;

	uc = 130; // 1000 0010
	uc = uc >> 1; // 0100 0001
	cout << +uc << endl;
}