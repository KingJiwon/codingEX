#include <iostream>
using namespace std;

typedef struct STag
{
	int m;
	char* str;
}SType;

void main()
{
	STag s;

	STag* ps = &s;
	ps->m = 2017;
	ps->str = "c++";

	cout << ps->m << " " << ps->str << endl;
}