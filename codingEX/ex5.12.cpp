void main()
{
	int i;
	void* p = &i;

	//*p = 1; error
	*(int*)p = 1; //void 포인터는 가리키는 주소의 메모리영역크기가 0이므로 타입변환을 통해 메모리 영역에 접근 가능
}