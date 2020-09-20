#include <iostream>
class SetValue {
public:	//이거 안써주면 컴파일 에러 뜸. private으로 해도 그럼.
	int x, y;
};

int main() {
	SetValue obj;
	obj.x = 33;
	obj.y = 44;

	std::cout << "X = " << obj.x << " ,Y = " << obj.y << std::endl;
	system("pause");
	return 0;
}