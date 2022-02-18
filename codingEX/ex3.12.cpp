#include <iostream>
using namespace std;

int NOT(int arg)
{
	return arg ? 0 : 1; // arg가 0이아닌경우(참) 0을반환 0인경우(거짓) 1을반환
}

void main()
{
	cout << NOT(3) << " " << NOT(0) << endl;
}