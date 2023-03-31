// C++
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
		int studentId;
		string name;
		string tel;
		string department;
		string address;
};

int main(void)
{
	//자료형 :Student(class 생략 가능)
	Student stu1;
	stu1.studentId = 2217;
	stu1.name = "한예월";
	stu1.tel = "010-1234-5678";
	stu1.department = "뉴미디어소프트웨어";
	stu1.address = "서울특별시 영등포구";

	cout << "학번 : " << stu1.studentId << endl;
	cout << "이름 : " << stu1.name << endl;
	cout << "전화번호 : " << stu1.tel << endl;
	cout << "학과 : " << stu1.department << endl;
	cout << "주소 : " << stu1.address << endl;

	return 0;
}


