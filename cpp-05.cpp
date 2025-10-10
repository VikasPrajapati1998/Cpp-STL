#include <iostream>
#include <typeinfo>
#include <string>

int main(int argc, char* argv[]) {
    std::string name;

    std::cout << "Enter your name: ";
    std::cin >> name;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    std::cout << "Hello " << name << std::endl;
    std::cout << "Type of name: " << typeid(name).name() << std::endl;

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
    std::cout << "You entered: " << num * 2 << std::endl;
    std::cout << "Type of num: " << typeid(num).name() << std::endl;

    return 0;
}
