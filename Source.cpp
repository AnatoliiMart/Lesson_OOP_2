#include <iostream>

class MyClass
{
public:
	MyClass()																													 // ����������� �� ���������
	{
		std::cout << "Constructor by default" << std::endl;
		x = 0;
	}
	MyClass(int a)																										// ����������� � �����������
	{
		std::cout << "Constructor with parameters" << std::endl;
		x = a;
	}
	void Output()
	{
		std::cout << x << std::endl;
  }
	~MyClass()
	{
		std::cout << "Destructor!" << std::endl;
	}
private:
	int x;
};

int main()
{
	MyClass one;
	one.Output();
	MyClass two(12);
	two.Output();

}
/*
����������� - ���� �����, ������� ���������� ������������� � ������ �������� ��������.
����������� �� ����� ���� ������������� ��������.
�������� ������������ ������ ��������� � ��������� ������.
������������ ����� �����������.
*/