#include <iostream>
#include <string.h>		//문자열 함수가 들어 있음

int main(void) 
{
	std::string  str1;
	std::string  str2 = "suye";

	//str1에 str2의 내용을 집어넣겠다.
	str1 = str2;

	std::cout << str1 << std::endl;


	return 0;
}