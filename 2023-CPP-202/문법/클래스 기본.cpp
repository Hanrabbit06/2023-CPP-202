﻿// C++
#include <iostream>
#include <string>

using namespace std;


//여러 data들을 하나의 의미있는 구조체로 묶어서 관리
//구조체, 클래스는 일반적으로 단어의 첫 글자로 대문자로 합시다.
//class는 디폴트가 private (stucrt는 디폴트가 public)
class Student {
	//성능때문에 studentId를 문자열로 하지 않음
	//일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
	//정수는 비교연산을 한번에 할 수 있으나, 
	//문자열은 글자수 만큼 반복하여 비교해야하기 때문에
	public:
		//생성자(constructor) : 객체를 생성될 때 호출되는 함수
		// 생성자는 반환형을 쓰지 않는다.
		//생성자를 정의하지 않으면 default로 매개변수가 없는 생성자가 정의된다.
		Student() {

		}

		Student(int _studentId, string _name, string _tel, string _department, string _address)
			//멤버면수 초기화. const/참조형 멤버변수 사용가능
			: studentId(_studentId), name(_name), tel(_tel),department(_department), address(_address)
		{
			
		}

		//class 멤버 함수를 가질 수 있다.
		void print(void) {
			cout << "학번 : " << studentId << endl;
			cout << "이름 : " << name << endl;
			cout << "전화번호 : " << tel << endl;
			cout << "학과 : " << department << endl;
			cout << "주소 : " << address << endl;
		}

		void set_studentId(int _studentId) { studentId = _studentId; }
		void set_name(string _name) { name = _name; }
		void set_tel(string _tel) { tel = _tel; }
		void set_department(string _department) { department = _department; }
		void set_address(string _address) { address = _address; }

	private:
		int studentId;
		string name;
		string tel;
		string department;
		string address;

		
};

int main(void)
{
	//매개변수가 없는 생성자
	//Student stu1;
	//Student stu1 = Student();
	//stu1.print();

	//정적할당 : 컴파일 시간에 메모리 크기가 결정
	//Student stu2 = Student(2210, "우엥", "010-0000-0000", "솦과", "미림어딘가");
	//stu2.print();

	/*Student stu3[2];

	for (int i = 0; i < 2; i++) {
		stu3[i].print();
	}*/
	
	//동적할당 : 실행시간(runtime)에 메모리 크기가 결정(메모리 heap영역)
	//동적할당된 공간은 포인터로 접근한다.
	//Student* stu3 = new Student(22, "설범", "010-0000-0000", "조소과", "서울");
	//stu3->print();

	////동적할당 해제(안하면 메모리 누수현상이 발생)
	//delete stu3;

	Student* stu4 = new Student[2];
	stu4[0].set_name("조태성");
	stu4[0].set_address("자취방");
	stu4[0].set_studentId(0000);
	stu4[0].set_department("제과제빵과");
	stu4[0].set_tel("000-0000-0000");

	stu4[1].set_name("서해봄");
	stu4[1].set_address("자취방");
	stu4[1].set_studentId(0000);
	stu4[1].set_department("경제학과");
	stu4[1].set_tel("000-0000-0000");


	Student* stu4 = new Student[2];

	for (int i = 0; i < 2; i++)
		stu4[i].print(); //배열의 요소에 해당하는 객체는 멤버를 .으로 접근
	delete[] stu4;

	return 0;
}
