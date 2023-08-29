#pragma once
#include <iostream>
#include "animal.h"
using namespace std;

class Dog : public Animla {
public:
	void bark(void) {
		cout << "¸Û¸Û" << endl;

	}
private:
	int speed;
};