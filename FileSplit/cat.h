#pragma once
#include <iostream>
#include "animal.h"
using namespace std;

class Cat : public Animla {
public:
	void bark(void) {
		cout << "�߿�" << endl;
	}
private:
	int claw;
};
