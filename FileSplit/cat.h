#pragma once

#include "animal.h"
using namespace std;

class Cat : public Animla {
public:
	void bark(void);
private:
	int claw;
};
