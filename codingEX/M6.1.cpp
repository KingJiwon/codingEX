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
	int n = sizeof(arr) / sizeof(int); // �迭�� ��� ����
	int temp; // �ٲٱ����� ������ ����
	for (int i = 0, r= n-1; i < n / 2; i++, r--)
	{
		temp = arr[i]; //temp �� ���ʰ� ����
		arr[i] = arr[r]; // ���ʰ� �����ʰ����� �ű��
		arr[r] = temp; // �����ʰ� ���ʰ����� �ű��
	}

	for(int i=0; i<n;i++)
	{ 
		cout <<  arr[i] << " ";
	}

}

void Asc()
{
	int arr[] = { 1,6,9,7,3,2,0,4,8,5 };
	int n = sizeof(arr) / sizeof(int); // �迭�� ��� ����
	int temp; // �ٲٱ����� ������ ����
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