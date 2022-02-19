#include <iostream>
using namespace std;

void main()
{
	int a;
	cout << "점수를 입력하세요." << endl;
	cin >> a;
	
	switch (a)
	{
	case 0:
		cout << "F" << endl;
		break;
	case 10:
		cout << "D" << endl;
		break;
	case 20:
		cout << "D" << endl;
		break;
	case 30:
		cout << "D" << endl;
		break;
	case 40:
		cout << "D" << endl;
		break;
	case 50:
		cout << "C" << endl;
		break;
	case 60:
		cout << "C" << endl;
		break;
	case 70:
		cout << "C" << endl;
		break;
	case 80:
		cout << "B" << endl;
		break;
	case 90:
		cout << "B" << endl;
		break;
	case 100:
		cout << "A" << endl;
		break;
	}
}