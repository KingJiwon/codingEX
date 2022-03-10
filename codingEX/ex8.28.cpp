void Func(int* arg)
{

}

void Func(int arg[]) //Error
{

}
// 배열을 함수인자로 사용할 경우내부적으로 포인터로 변환된다. int*arg 로 변환되어 중복허용 x