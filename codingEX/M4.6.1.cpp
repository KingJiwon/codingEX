#include <iostream>
using namespace std;

void main()
{
	float a;
	cout << "수능 성적 상위 비율을 입력하세요!" << endl;
	cin >> a;

	if ((0 < a) && (a <= 4))
	
		cout << "1등급입니다." << endl;
	
	else if ((4 < a) && (a <= 11))
	
		cout << "2등급입니다." << endl;
	
	else if ((11 < a) && (a <= 23))
	
		cout << "3등급입니다." << endl;
	
	else if ((23 < a) && (a <= 40))
	
		cout << "4등급입니다." << endl;
	
	else if ((40 < a) && (a <= 60))
	
		cout << "5등급입니다." << endl;
	
	else if ((60 < a) && (a <= 77))
	
		cout << "6등급입니다." << endl;
	
	else if ((77 < a) && (a <= 89))
	
		cout << "7등급입니다." << endl;
	
	else if ((89 < a) && (a <= 96))
	
		cout << "8등급입니다." << endl;
	
	else if ((96 < a) && (a <= 100))
	
		cout << "9등급입니다." << endl;
	
}