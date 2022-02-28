typedef struct
{
	char m;
}SType;

void main()
{
	SType a, b;

	a.m = 1;

	b = a;
	// b == a; Error
	// b > a; Error
}