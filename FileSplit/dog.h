#pragma once
#include <iostream>
#include "animal.h"
using namespace std;

class Dog : public Animla {
public:
	void bark(void) {
		cout << "�۸�" << endl;

	}
private:
	int speed;
};