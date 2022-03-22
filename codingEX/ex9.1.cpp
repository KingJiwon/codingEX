#include <iostream>
using namespace std;

class CFamily //classname
{
protected:
	char* m_FamilyName; //멤버데이터 정의
public:
	void SetFamilyName(char* arg)
	{
		m_FamilyName = arg;
	}
};

class CName : public CFamily //base_list
{
private:
	char* m_Name;

public:
	void SetName(char* arg); //멤버 함수 선언
	void ShowName() //멤버 함수 정의
	{
		cout << m_FamilyName << " " << m_Name << endl;
	}
};

void CName::SetName(char* arg) //외부 멤버 함수 정의
{
	m_Name = arg;
}

void main()
{
	CName name;
	name.SetFamilyName("Park");
	name.SetName("Ji Won");
	name.ShowName();
}