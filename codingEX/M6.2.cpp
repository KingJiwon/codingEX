#include <iostream>
using namespace std;

void main()
{
	int score[4][3] =
	{
		{100, 100 ,50},
		{90, 70, 80},
		{70, 80, 90},
		{80, 100, 90}
	};
	
	//�л��� ����

	int sum;
	for (int i = 0; i < 4; i++)
	{
		sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
		}
		cout << "�л�" << i + 1 << "�� ������ " << sum << "�Դϴ�." << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		sum = 0;
		for (int j = 0; j < 4; j++)
		{
			sum += score[i][j]; //�������� ���� �� ���ϱ�
		}
		string subject = ""; 
		switch (i)
		{
		case 0:subject = "����"; //i�� 0�϶� subject�� ����
			break;
		case 1:subject = "����";
			break;
		case 2:subject = "����";
			break;
		}
		cout << subject << "������ ����� " << sum/4.0<< "���Դϴ�." << endl;
	}
	
}