#include <iostream>
using namespace std;

class CFamily //classname
{
protected:
	char* m_FamilyName; //��������� ����
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
	void SetName(char* arg); //��� �Լ� ����
	void ShowName() //��� �Լ� ����
	{
		cout << m_FamilyName << " " << m_Name << endl;
	}
};

void CName::SetName(char* arg) //�ܺ� ��� �Լ� ����
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