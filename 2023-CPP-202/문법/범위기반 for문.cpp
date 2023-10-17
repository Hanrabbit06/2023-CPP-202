#include <iostream>

using namespace std;

int main(void) 
{
	int a[] = { 1,2,3,4,5 };
	for (int x : a) {
		cout << x << endl;
	}
	
	return 0;
}