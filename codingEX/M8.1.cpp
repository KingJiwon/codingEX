#include <iostream>
using namespace std;


void IncrementPrev(int a)
{
	
	cout << ++a << endl;
}

void IncrementPost(int b)
{
	cout << b++ << endl;
}

void main()
{
	int c = 1;
	IncrementPrev(c);
	IncrementPost(c);


}