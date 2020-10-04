#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int i;

class A {
public:
	~A() {
		i = 10;
	}
};
int &foo(){
	i = 3;
	//클래스동적할당
	A* ob = new A();
	//메모리없앰
	delete ob;
	return i;
}
int main() {
	cout << foo() << endl;
	return 0;
}