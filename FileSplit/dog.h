#pragma once

#include "animal.h"
using namespace std;

class Dog : public Animla {
public:
	void bark(void);
private:
	int speed;
};