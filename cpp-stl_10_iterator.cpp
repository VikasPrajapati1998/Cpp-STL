#include <iostream>
#include <string>
#include <vector>
#include <exception>

int main(int argc, char* argv[]) {
    try {
        std::vector<int> v = {2, 3, 5, 7, 11};

        // Method 01: Print vector
        for (int i = 0; i < v.size(); ++i) {
            std::cout << v[i];
            if (i + 1 != v.size())
                std::cout << ", ";
        }
        std::cout << std::endl;

        // Method 02: Print vector using iterators
        std::vector<int>::iterator it;
        for (it = v.begin(); it != v.end(); it++) {
            std::cout << *it;
            if (it + 1 != v.end())
                std::cout << ", ";
        }
        std::cout << std::endl;

        // Method 03: Print vector using typeid
        for (auto it = v.begin(); it != v.end(); it++) {
            std::cout << *it;
            if (it + 1 != v.end())
                std::cout << ", ";
        }
        std::cout << std::endl << std::endl;

        // Method 04: Print vector using range-based for loop
        for (int value: v) {
            std::cout << value << ", ";
        }
        std::cout << std::endl;

        for (int value: v) {
            std::cout << value++ << ", ";
        }
        std::cout << std::endl;

        for (auto value: v) {
            std::cout << value << ", ";
        }
        std::cout << std::endl << std::endl;



        for (int &value: v) {
            std::cout << value++ << ", ";
        }
        std::cout << std::endl;

        for (auto &value: v) {
            std::cout << value << ", ";
        }
        std::cout << std::endl << std::endl;

        // Vector of Pairs
        std::vector<std::pair<int, int>> vp = {
            {1, 2},
            {3, 4},
            {5, 6},
            {7, 8}
        };
        std::vector<std::pair<int, int>>::iterator itr;
        for (std::pair<int, int>& p: vp) {
            std::cout << "(" << p.first++ << ", " << p.second++ << ")";
            if (&p != &vp.back())
                std::cout << ", ";
        }
        std::cout << std::endl;

        for (auto& p: vp) {
            std::cout << "(" << p.first << ", " << p.second << ")";
            if (&p != &vp.back())
                std::cout << ", ";
        }
        std::cout << std::endl << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception occurred." << std::endl;
    }
}

