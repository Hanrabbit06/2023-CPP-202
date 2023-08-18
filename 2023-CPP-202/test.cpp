#include <iostream>
#include <string>

using namespace std;

template <typename T>
T sum(T x, T y) {
	return x + y;
}

int main(void) {
	cout << sum<int>(1, 2) << endl;
	cout << sum<double>(1, 2) << endl;
}