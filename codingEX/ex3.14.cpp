#include <iostream>
using namespace std;

void main()
{
	cout << fixed;
	cout.precision(0);

	int i = 3.141592;
	float f = 67108870;

	cout << i << " " << f << endl;
}