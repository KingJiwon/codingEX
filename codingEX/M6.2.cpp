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
	
	//학생별 총점

	int sum;
	for (int i = 0; i < 4; i++)
	{
		sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
		}
		cout << "학생" << i + 1 << "의 총점은 " << sum << "입니다." << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		sum = 0;
		for (int j = 0; j < 4; j++)
		{
			sum += score[i][j]; //각과목의 점수 합 구하기
		}
		string subject = ""; 
		switch (i)
		{
		case 0:subject = "국어"; //i가 0일때 subject는 국어
			break;
		case 1:subject = "영어";
			break;
		case 2:subject = "수학";
			break;
		}
		cout << subject << "과목의 평균은 " << sum/4.0<< "점입니다." << endl;
	}
	
}