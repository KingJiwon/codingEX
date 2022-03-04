#include <iostream>
using namespace std;
typedef struct
{
	char* name;
	int height;
	int weight;
	int hpower;
} Robot;

void Print(Robot* a)
{
	cout << "�̸�: " << a->name << endl;
	cout << "����: " << a->height << endl;
	cout << "����: " << a->weight << endl;
	cout << "����: " << a->hpower << endl;
}
void Avg(Robot a[4])
{
	float hsum = 0;
	float wsum = 0;
	float psum = 0;

	for (int i = 0; i < 4; i++)
	{
		hsum += a[i].height;
		wsum += a[i].weight;
		psum += a[i].hpower;
	}
	cout << "��� ����: " << hsum/4 << "M" << endl;
	cout << "��� ����: " << wsum / 4 << "T" << endl;
	cout << "��� ����: " << psum / 4 << endl;
}
void main()
{
	Robot r[4] =
	{
		{ "�±Ǻ���", 18, 80, 3000},
		{ "��¡��", 17, 70, 2500 },
		{ "��ĭ������", 20, 90, 3500 },
		{ "�׷�������", 22, 100, 5000 },
	};
	Robot a{};
	int count = sizeof(r) / sizeof(a);

	for (int i = 0; i < count; i++)
	{
		Print(&r[i]);
	}
	Avg(r);
}