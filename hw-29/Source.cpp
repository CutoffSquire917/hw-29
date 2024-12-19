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

	//�������� 2: �������� �� ��� ��������������
	//����:
	//������� ������� ���� Vehicle, ���� ������:

	//���� string brand (�����).
	//���� int year (�� �������)
	//����� getDescription(), �� ������� ����� � ������ ������ � ������: �Brand: Toyota, Year: 2015�.
	//������� �������� ���� Car, ���� ����:

	//���� string model (������).
	//���� int mileage (�����)
	//����� getDescription(), ���� ������� ����� getDescription() �������� ����� � ���� ��� ��� ������ � ����� � ������: �Model: Corolla, Mileage: 50000 km�.


	//�������� 3: ����������� �� ��� ������������
	//����:
	//������� ������� ���� Employee, ���� ������:

	//���� string name (��'� �����������).
	//���� string position (������).
	//���� double salary (��������).
	//����� getDetails(), �� ������� ����� � ������:
	//�Name: Alice, Position: Developer, Salary: 50000.00�.
	//������� �������� ���� Manager, ���� ����:

	//���� string department (����).
	//����� getDetails(), ���� ������� ����� getDetails() �������� ����� � ���� ���������� ��� ���� � ������: �Department: IT�.
}