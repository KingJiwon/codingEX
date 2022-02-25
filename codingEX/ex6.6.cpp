#include <iostream>
using namespace std;

void main()
{
	int arr[2] = { 1,2 };
	int* p1 = arr;
	int(*p2)[2] = &arr;

	cout << *p1 << "," << *p2[0] << endl;
}