#include <iostream>

using namespace std;

// Base case: No arguments left
void printArgs() {
    cout << "Done!" << endl;
}

// Recursive case
template <typename First, typename... Rest>
void printArgs(First first, Rest... rest) {
    cout << "Argument: " << first << endl;
    printArgs(rest...);  // Recursive call with remaining args
}

int main() {
    printArgs(42, "Hello", 3.14, 'A', 18, "Arjun", 54, 'J');
    return 0;
}

