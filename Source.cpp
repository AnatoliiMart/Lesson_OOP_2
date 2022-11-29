#include <iostream>

class MyClass
{
public:
	MyClass()																													 // конструктор по умолчанию
	{
		std::cout << "Constructor by default" << std::endl;
		x = 0;
	}
	MyClass(int a)																										// конструктор с параметрами
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
 онструктор - спец метод, который вызываетс€ автоматически в момент создани€ объектов.
 онструктор не имеет типа возвращаемого значени€.
Ќазвание конструктора всегда совпадает с названием класса.
 онструктора можно перегружать.
*/