void main()
{
	int i;
	void* p = &i;

	//*p = 1; error
	*(int*)p = 1; //void �����ʹ� ����Ű�� �ּ��� �޸𸮿���ũ�Ⱑ 0�̹Ƿ� Ÿ�Ժ�ȯ�� ���� �޸� ������ ���� ����
}