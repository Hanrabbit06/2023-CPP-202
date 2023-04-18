// C++
#include <iostream>
#include <string>

using namespace std;

class Employee {
public :
	Employee() {

	}
	Employee(string name, int id, int age, double salary)
		: name_(name), id_(id), age_(age), salary_(salary) {

	}
	void set_name(string name) { name_ = name; }
	void set_id(int id) { id_ = id; }
	void set_age(int age) { age_ = age; }
	void set_salary(double salary) { salary_ = salary; }

	void printInfo(void) {
		cout << "�̸� : " << name_ << endl;
		cout << "��� : " << id_ << endl;
		cout << "���� : " << age_ << endl;
		cout << "�޿� : " << salary_ << endl;
	}

private:
	string name_;
	int id_;
	int age_;
	double salary_;
};

int main(void) {

	Employee* em1 = new Employee("��ġ", 0001, 11, 11.11);
	em1->printInfo();
	delete em1;

	Employee* em2 = new Employee[2];
	em2[0].set_name("��");
	em2[0].set_id(0002);
	em2[0].set_age(22);
	em2[0].set_salary(22.22);

	em2[1].set_name("��");
	em2[1].set_id(0003);
	em2[1].set_age(33);
	em2[1].set_salary(33.33);

	for (int i = 0; i < 2; i++)
		em2[i].printInfo();
	delete[] em2;

	return 0;
}