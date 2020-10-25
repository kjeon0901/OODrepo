#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
class Strategy {
public:
	Strategy() {}
	virtual int doOperation(int num1, int num2) = 0;

};

static Strategy* st = 0;

class OperationAdd : public Strategy {
	//@Override
public:
	OperationAdd() :Strategy() {}
	int doOperation(int num1, int num2) {
		return num1 + num2;
	}
};

class OperationSubstract : public Strategy {
	//@Override
public:
	OperationSubstract() :Strategy() {}
	int doOperation(int num1, int num2) {
		return num1 - num2;
	}
};

class OperationMultiply : public Strategy {
	//@Override
public:
	OperationMultiply() :Strategy() {}
	int doOperation(int num1, int num2) {
		return num1 * num2;
	}
};

class Context {
public:
	Context(Strategy* st) {
		st = st;
	}
	static int executeStrategy(int num1, int num2) {
		return st->doOperation(num1, num2);
	}
};
int main(){

	Context* context = new Context(new OperationAdd);
	cout << "10 + 5 = " << context->executeStrategy(10, 5) << endl;

	context = new Context(new OperationSubstract);
	cout << "10 - 5 = " << context->executeStrategy(10, 5) << endl;

	context = new Context(new OperationMultiply);
	cout << "10 * 5 = " << context->executeStrategy(10, 5) << endl;
}