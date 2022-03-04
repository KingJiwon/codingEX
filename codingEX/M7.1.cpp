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
	cout << "이름: " << a->name << endl;
	cout << "신장: " << a->height << endl;
	cout << "무게: " << a->weight << endl;
	cout << "마력: " << a->hpower << endl;
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
	cout << "평균 신장: " << hsum/4 << "M" << endl;
	cout << "평균 무게: " << wsum / 4 << "T" << endl;
	cout << "평균 마력: " << psum / 4 << endl;
}
void main()
{
	Robot r[4] =
	{
		{ "태권브이", 18, 80, 3000},
		{ "마징가", 17, 70, 2500 },
		{ "메칸더브이", 20, 90, 3500 },
		{ "그랜다이져", 22, 100, 5000 },
	};
	Robot a{};
	int count = sizeof(r) / sizeof(a);

	for (int i = 0; i < count; i++)
	{
		Print(&r[i]);
	}
	Avg(r);
}