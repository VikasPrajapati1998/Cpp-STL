// Input buffer to flush it after each input.
#include <iostream>
#include <limits>

// #define CODE_A
#define CODE_B

int main() {
#ifdef CODE_A
    int age;
    
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Manage the input buffer to take the input from the user
    if (std::cin.fail()) {
        std::cout << "Invalid input!\n";
        std::cin.clear(); // clear error
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // flush buffer
    } else {
        std::cout << "You entered: " << age << std::endl;
    }
    
#endif

#ifdef CODE_B
    int number=0;

    std::cout << "Enter a number: ";
    std::cin >> number;

    // flush input buffer safely
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "You entered: " << number << "\n";

#endif
    return 0;
}

