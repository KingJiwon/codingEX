void Func(int arg)
{

}

void Func(const int arg)
{

}

void main()
{
	int a = 1;
	Func(a);
}

//int와 const int 는 같은 인자 타입열로 취급하기때문에 오류.
