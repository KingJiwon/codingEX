class Ctest
{
	char* m_Name;

public:
	int m_Level;
};

struct Stest
{
	char* m_Name;

private:
	int m_Level;
};

void main()
{
	Ctest c;
	//c.m_Name = "Class" error
	c.m_Level = 2;

	Stest s;
	s.m_Name = "Struct";
	//s.m_Level = 1; error
}