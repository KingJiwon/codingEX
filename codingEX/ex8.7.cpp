#include <iostream>
using namespace std;

int Increment(int arg)
{
	arg++;
	return arg;
}

void main()
{
	cout << Increment(3) << endl;
}

// 매개변수 = arg, 실인자 = 3