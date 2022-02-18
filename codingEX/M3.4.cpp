#include <iostream>
using namespace std;
#define MAX 10000
int JIWON(int a)
{
	int i = 0;
	while (a != 0)
	{
		a = a / 10;
		++i;
	}
	return i;
}

void main()
{
	int c;
	cout << "10,000보다 작은 정수를 입력하세요" << endl;
	cin >> c;

	c < MAX
		? (cout << c << "은(는) " << JIWON(c) << "자릿수입니다." << endl)
		: (cout << "10,000이하의 정수를 입력하세요." << endl);
}