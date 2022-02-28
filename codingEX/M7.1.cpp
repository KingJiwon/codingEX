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
		case 0: name = "태권브이";
			break;
		case 1: name = "마징가";
			break;
		case 2: name = "메칸더브이";
			break;
		case 3: name = "그랜다이져";
		}
		
		cout << "이름:" << name << "  " << "신장:" << r.spec[i][0] << "m" << "  " << "무게:" << r.spec[i][1] << "T" << "  " << "마력:" << r.spec[i][2] << endl;
		
		
	}
}




void main()
{
	Robo a;
	Print(&a);
}