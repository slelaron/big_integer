#include <iostream>
#include <typeinfo>

using namespace std;

int main() {

	int *((e[10]));
	cout << typeid(e[0]).name() << endl;
}
