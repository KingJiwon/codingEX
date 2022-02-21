void main()
{
	int a = 3;
	int* p1, p2, * p3; // int*p1; int p2; int*p3
	p1 = &a;
	p2 = &a; //Error
	p3 = &a;
}