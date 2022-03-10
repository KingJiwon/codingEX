#include <iostream>
using namespace std;

void Reverse(int arr[], const int b);

void main()
{
	const int size = 7;
	int arr[10] = { 1,2,3,4,5,6,7 };
	Reverse(arr, size);
	Print(arr, size);
}