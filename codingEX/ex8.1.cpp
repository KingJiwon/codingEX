#include <iostream>
using namespace std;

int Multiply(int a, int b)
{
	int Result = a * b;
	return Result; 
	Result = 0; //이미  return을 통해 반환되었기 때문에 절대 실행되지 않음
}

void main()
{
	int Result = Multiply(3, 4);
	cout << Result << endl;
	return;
}