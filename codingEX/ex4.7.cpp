#include <iostream>
using namespace std;

void main()
{
	int a = 3;
	switch (3)
	{
	case a: // 변수는 case의 값으로 사용할 수 없다.
		cout << a << endl;
	}
}