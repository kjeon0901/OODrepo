#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

class Animal {
private:
	std::string name;

public:
	Animal() {};
	Animal(std::string name) : name(name) {};

	void showName() {
		std::cout << "Name is " << name << std::endl;
	}

	//operator+ �߰��ϼ���
	Animal operator+ (const Animal& add_animal) {
		Animal added(this->name+add_animal.name);
		return added;
	}
};

int main() {
	Animal cat("Nabi");
	cat.showName();
	Animal dog("Jindo");
	dog.showName();

	Animal catDog = dog + cat; //������ �ռ�
	catDog.showName();

	dog.showName();

	getchar();
	return 0;
}
