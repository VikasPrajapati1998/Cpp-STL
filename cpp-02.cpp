#include <iostream>
#include <limits>
#include <stdexcept>

using namespace std;

int main() {
    try {
        int number;

        cout << "Enter a number: ";
        cin >> number;

        // Check if input failed
        if (cin.fail()) {
            // Clear error state and flush buffer
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            // Throw an exception with message
            throw runtime_error("Invalid input: Please enter a valid integer.");
        }

        // Flush any leftover input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "You entered: " << number << "\n";
    }
    catch (const exception& e) {
        cerr << "Standard error: " << e.what() << "\n";
    }
    catch (...) {
        cerr << "Unknown error occurred.\n";
    }

    return 0;
}
