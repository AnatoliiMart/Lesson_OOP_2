#include <iostream>
class Student
{
public:
	Student()														 // Constructor by default
	{
		std::cout << "Constructor by default" << std::endl;
		name = nullptr;
		age = 0;
	}
	Student(const char* Name, int Age)   // Constructor by 2 param
	{
		std::cout << "Constructor with parameters" << std::endl;
		name = new char[strlen(Name) + 1];
		strcpy_s(name, strlen(Name) + 1, Name);
		age = Age;
	}
	Student(int Age)									  // Constructor by 1 param
	{
		std::cout << "Constructor with parameters" << std::endl;
		age = Age;
		name = nullptr;
	}
	void Output()
	{
		if (name == nullptr)
		{
			std::cout << "Empty object!" << std::endl;
			return;
		}
		std::cout << "Name: " << name << std::endl;
		std::cout << "Age: "  << age << std::endl;
	}
	~Student()
	{
		std::cout << "Destruct" << std::endl;
		delete[] name;
	}
private:
	char* name;
	int age;
};



int main()
{
	Student obj1("Oleg", 21);
	obj1.Output();
}
	
/*
Конструктор - спец метод, который вызывается автоматически в момент создания объектов.
Конструктор не имеет типа возвращаемого значения.
Название конструктора всегда совпадает с названием класса.
Конструктора можно перегружать.
*/