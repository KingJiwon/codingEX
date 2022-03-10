#include <iostream>
#include <stdarg.h>
using namespace std;

void Sum(int arg1, ...)
{
	va_list arg_ptr;
	va_start(arg_ptr, arg1);
	int sum = 0;
	for (int i = 0; i < arg1; i++)
	{
		sum += va_arg(arg_ptr, int);
	}
	va_end(arg_ptr);

	cout << sum<< " ";
}

void main()
{
	Sum(5, 1, 2, 3, 4, 5);
	Sum(3, 1, 2, 3);
	Sum(1, 1);
}