#include <iostream>


int main(int argc, char* argv[]) {
    std::string name;

    std::cout << "Enter your name: ";
    std::cin >> name;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    std::cout << "Hello " << name << std::endl;


    return 0;
}