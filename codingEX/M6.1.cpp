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
	cout << "������ �� :" << sum << endl;
	
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
	cout << "�ִ�: " << Max << endl;
	int Min = Max;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (Min > arr[i])
		{
			Min = arr[i];
		}
	}
	cout << "�ּҰ�: " << Min << endl;
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