#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(const string name, const int age) : name(name), age(age) {}
	void getInfo() const {
		cout << "Name: " << name << "\nAge: " << age << endl;
	}
};

class Child : public Person {
private:
	string parentName;
public:
	Child(const string name, const string parentName, const int age)
		: Person(name, age), parentName(parentName) {
	}
	void getInfo() const {
		Person::getInfo();
		cout << "Parent name: " << parentName << endl;
	}
};

int main()
{
	Child ch1("Alex", "Pipi", 12);
	ch1.getInfo();

	//Завдання 2: Автомобілі та їхні характеристики
	//Опис:
	//Створіть базовий клас Vehicle, який містить:

	//Поле string brand (марка).
	//Поле int year (рік випуску)
	//Метод getDescription(), що повертає рядок з описом машини у форматі: «Brand: Toyota, Year: 2015».
	//Створіть похідний клас Car, який додає:

	//Поле string model (модель).
	//Поле int mileage (пробіг)
	//Метод getDescription(), який викликає метод getDescription() базового класу і додає дані про модель і пробіг у форматі: «Model: Corolla, Mileage: 50000 km».


	//Завдання 3: Співробітники та їхні спеціалізації
	//Опис:
	//Створіть базовий клас Employee, який містить:

	//Поле string name (ім'я співробітника).
	//Поле string position (посада).
	//Поле double salary (зарплата).
	//Метод getDetails(), що повертає рядок у форматі:
	//«Name: Alice, Position: Developer, Salary: 50000.00».
	//Створіть похідний клас Manager, який додає:

	//Поле string department (відділ).
	//Метод getDetails(), який викликає метод getDetails() базового класу і додає інформацію про відділ у форматі: «Department: IT».
}