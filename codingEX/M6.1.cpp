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
	int n = sizeof(arr) / sizeof(int); // 배열의 요소 갯수
	int temp; // 바꾸기위해 저장할 변수
	for (int i = 0, r= n-1; i < n / 2; i++, r--)
	{
		temp = arr[i]; //temp 에 왼쪽값 저장
		arr[i] = arr[r]; // 왼쪽값 오른쪽값으로 옮기기
		arr[r] = temp; // 오른쪽값 왼쪽값으로 옮기기
	}

	for(int i=0; i<n;i++)
	{ 
		cout <<  arr[i] << " ";
	}

}

void Asc()
{
	int arr[] = { 1,6,9,7,3,2,0,4,8,5 };
	int n = sizeof(arr) / sizeof(int); // 배열의 요소 갯수
	int temp; // 바꾸기위해 저장할 변수
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout <<  arr[i] << " ";
	}
}

void main()
{
	Sum();
	MnM();
	Sort();
	cout << "" << endl;
	Asc();
}