#include <iostream>

using namespace std;

int main(void) 
{
	int a[4] = { 1,2,3,4 };

	//누가봐도 a의 자료형은 int이다.
	auto b = 4;

	//x의 자료형은 int로 자동설정
	for (auto x : a) {
		cout << x << endl;
	}
	
	return 0;
}