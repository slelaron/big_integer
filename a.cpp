#include <iostream>

using namespace std;

struct base {
	void f() {
		cout << "base" << endl;
	}
};

struct derive:base {
	virtual void f() {
		cout << "der" << endl;
	}
};

int main() {
	derive * a = new derive;
	a -> f();
	base * b = (base *) a;
	b -> f();
	return 0;
}
