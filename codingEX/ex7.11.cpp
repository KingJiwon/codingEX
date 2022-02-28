#include <iostream> <stddef.h>
using namespace std;

typedef struct
{
	char c;
	int i;
}SType;

void main()
{
	int offsetC = offsetof(SType, c);
	int offsetI = offsetof(SType, i);

	cout << "c offset: " << offsetC << endl;
	cout << "i offset: " << offsetI << endl;
}  

