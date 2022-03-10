#include <iostream>
using namespace std;

void Print(int arr[],const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


void Reverse(int arr[], const int size)
{
	int a = 0;
	for (int i = 0; i < size / 2; i++)
	{
		a = arr[i];
		arr[i] = arr[(size-1)-i];
		arr[(size-1)-i] = a;
	}

	for (int i = 0; i < size ; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Sort(int arr[], const int size )
{
	int a = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for(int j =0; j<size-1; j++)
		{ 
		a = arr[j];
		if (arr[j] > arr[j + 1])
		{
			arr[j] = arr[j + 1];
			arr[j + 1] = a;
		}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] <<" ";
	}
}

void main()
{
	const int size = 7;
	int arr[10] = { 1,2,3,4,5,6,7 };
	int arr2[10] = { 7,1,3,5,6,2,4 };
	Print(arr, size);
	Reverse(arr, size);
	Sort(arr2, size);
}