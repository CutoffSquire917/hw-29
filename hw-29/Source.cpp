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

class Vehicle {
private:
	string brand;
	int year;
public:
	Vehicle(const string brand, const int year) : brand(brand), year(year) {}
	void getDescription() const {
		cout << "Name: " << brand << "\nYear: " << year << endl;
	}
};
class Car : public Vehicle {
private:
	string model;
	int mileage;
public:
	Car(const string brand, const string model, const int year, const int mileage)
		: Vehicle(brand, year), model(model), mileage(mileage) {
	}
	void getDescription() const {
		Vehicle::getDescription();
		cout << "Model: " << model << "\nMilage: " << mileage << "km" << endl;
	}
};

class Employee {
private:
	string name;
	string position;
	double salary;
public:
	Employee(const string name, const string position, const double salary)
		: name(name), position(position), salary(salary) {
	}
	void getDetails() const {
		cout << "Name: " << name << ", Position: " << position << ", Salary: " << salary << endl;
	}
};
class Manager : public Employee {
private:
	string department;
public:
	Manager(const string name, const string position, const double salary, const string department)
		: Employee(name, position, salary), department(department) {
	}
	void getDetails() const {
		Employee::getDetails();
		cout << "Addt. Department: " << department << endl;
	}
};


int main()
{
	Child ch1("Alice", "John", 30);
	ch1.getInfo();

	cout << endl;
	Car c1("Toyota", "Corolla", 2015, 50000);
	c1.getDescription();
	
	cout << endl;
	Manager m1("Alice", "Developer", 50000, "IT");
	m1.getDetails();
}