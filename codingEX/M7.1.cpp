#include <iostream>
using namespace std;

typedef struct
{
	int spec[4][3] =
	{
		{18, 80, 3000},
		{17, 70, 2500},
		{20, 90, 3500},
		{22, 100, 5000}
	};
}Robo;

void Print(Robo* Robot)
{
	Robo r;

	for (int i = 0; i < 4 ; i++)
	{
		string name = "";
		switch (i)
		{
		case 0: name = "�±Ǻ���";
			break;
		case 1: name = "��¡��";
			break;
		case 2: name = "��ĭ������";
			break;
		case 3: name = "�׷�������";
		}
		
		cout << "�̸�:" << name << "  " << "����:" << r.spec[i][0] << "m" << "  " << "����:" << r.spec[i][1] << "T" << "  " << "����:" << r.spec[i][2] << endl;
		
		
	}
}




void main()
{
	Robo a;
	Print(&a);
}