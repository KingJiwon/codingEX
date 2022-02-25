#include <iostream>
using namespace std;



void Sum()
{
	int arr[] = { 1,6,9,7,3,2,0,4,8,5 };
	int sum = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		sum += arr[i];
	}
	cout << "원소의 합 :" << sum << endl;
	
}

void MnM()
{
	int arr[] = { 1,6,9,7,3,2,0,4,8,5 };
	int Max = 0;
	

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (Max < arr[i])
		{
			Max = arr[i];
		}		
	}
	cout << "최댓값: " << Max << endl;
	int Min = Max;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (Min > arr[i])
		{
			Min = arr[i];
		}
	}
	cout << "최소값: " << Min << endl;
}

void Sort()
{
	int arr[] = { 1,6,9,7,3,2,0,4,8,5 };

}

void main()
{
	Sum();
	MnM();

}