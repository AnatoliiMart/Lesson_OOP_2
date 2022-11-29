#include <iostream>
class Student
{
private:
	char* initials;
	char* city;
	char* phoneNumb;
	char* country;
	char* educationalInstitution;
	char* groupNumber;

	int age;
	int day;
	int month;
	int year;

public:
	Student(const char* Initials, const char* City, const char* PhoneNumb, const char* Country, const char* EducationalInstitution, const char* GroupNumber,
		int Age, int Day, int Month, int Year)
	{
		initials = new char[strlen(Initials) + 1];
		strcpy_s(initials, strlen(Initials) + 1, Initials);

		city = new char[strlen(City) + 1];
		strcpy_s(city, strlen(City) + 1, City);

		phoneNumb = new char[strlen(PhoneNumb) + 1];
		strcpy_s(phoneNumb, strlen(PhoneNumb) + 1, PhoneNumb);

		country = new char[strlen(Country) + 1];
		strcpy_s(country, strlen(Country) + 1, Country);

		educationalInstitution = new char[strlen(EducationalInstitution) + 1];
		strcpy_s(educationalInstitution, strlen(EducationalInstitution) + 1, EducationalInstitution);

		groupNumber = new char[strlen(GroupNumber) + 1];
		strcpy_s(groupNumber, strlen(GroupNumber) + 1, GroupNumber);
		age = Age;
		day = Day;
		month = Month;
		year = Year;
	}
		void Output()
		{
			std::cout << "Initials: " << initials << std::endl;
			std::cout << "City: " << city << std::endl;
			std::cout << "Phone number: " << phoneNumb << std::endl;
			std::cout << "Country: " << country << std::endl;
			std::cout << "Educational Institution: " << educationalInstitution << std::endl;
			std::cout << "Group number: " << groupNumber << std::endl;
			std::cout << "Age: " << age << std::endl;
			std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
			std::cout << std::endl;
		}
	

};



int main()
{
	Student obj1("Mykolenko S.O.", "Odesa", "+38095648541", "Ukraine", "IT Step", "PV221", 21, 24, 07, 2018);
	obj1.Output();
	Student obj2("Apolionio A.D.", "Barcelona", "+38095647845", "Spain", "IT Step", "PV221", 21, 01, 06, 2020);
	obj2.Output();
	Student obj3("Berghoff J.K.", "Berlin", "+38095645651", "Germany", "IT Step", "PV221", 21, 01, 05, 2019);
	obj3.Output();
	Student obj4("Soshenko V.A.", "Kyiv", "+38095641544", "Ukraine", "IT Step", "PV221", 21, 31, 07, 2022);
	obj4.Output();

}
	
/*
 онструктор - спец метод, который вызываетс€ автоматически в момент создани€ объектов.

 онструктор не имеет типа возвращаемого значени€.

Ќазвание конструктора всегда совпадает с названием класса.

 онструктора можно перегружать.


ƒеструктор - это спец метод, который автоматически вызываетс€ перед уничтожением объекта.

ƒеструкторы не перегружаютс€ и не принимают параметров.

≈сть только один деструктор в классе, и им€ деструктора совпадает с именем класса.
*/