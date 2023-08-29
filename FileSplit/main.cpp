#include <iostream>

using namespace std;

class Animla {
public:
	void bark(void)
	{

	}
private:
	int leg_num_;

};

class Dog : public Animla{
public:
	void bark(void) {
		cout << "港港" << endl;

	}
private:
	int speed;
};

class Cat : public Animla {
public:
	void bark(void) {
		cout << "具克" << endl;
	}
private:
	int claw;
};

int main(void)
{
	Animla a;
	Dog poppi;
	Cat nabi;

	a.bark();
	poppi.bark();
	nabi.bark();

	return 0;
}