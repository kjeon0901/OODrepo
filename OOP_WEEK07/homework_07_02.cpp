/*
#include <iostream>

bool funcA() {
    int c;
    std::cin >> c;
    if (c < 10) //Let's assume this is exception
        return false;
    return true;
}
int main() {
    if (funcA()){

    }
    else {
        std::cout << "Exception : Invalid Input!!" << std::endl;
    }
    return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

bool funcA() {
    int c;
    std::cin >> c;
    if (c < 10) //Let's assume this is exception
        throw std::out_of_range("Invalid Input!!"); //
    return true;
}
int main() {
    try {//
        funcA();
    }
    catch (std::out_of_range& e) {//
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
