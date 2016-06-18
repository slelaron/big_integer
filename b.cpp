#include <iostream>
#include "a.cpp"

int x::f() {
	return a + 2 * b;
}


using namespace std;
int main() {
	x d;
	d.a = 1;
	d.b = 2;
	cout << d.f() << endl;
	return 0;
}
