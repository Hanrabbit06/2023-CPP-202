#pragma once
#include <iostream>
#include "animal.h"
using namespace std;

class Cat : public Animla {
public:
	void bark(void) {
		cout << "¾ß¿Ë" << endl;
	}
private:
	int claw;
};
