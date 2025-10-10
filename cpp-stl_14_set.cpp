/*
set: store the value into the sorted order and duplicates are not allowed.
It use the red-back tree to store the values.
*/
#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <exception>

template <typename T>
void printSet(const std::set<T>& s) {
    std::cout << "set: " << s.size() << std::endl;
    for (const auto& value : s) {
        std::cout << value;
        if (&value != &(*s.rbegin())) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl << std::endl;
}

int main(int argc, char* argv[]) {
    try {
        // ======================== Set Initialization ========================
        std::set<std::string> s1  = {"alpha", "beta", "gamma", "delta", "charlie", "epsilon"};
        s1.insert("zeta");
        s1.insert("beta"); // duplicate, will be ignored
        printSet(s1);

        auto it = s1.find("delta");
        if (it != s1.end()) {
            std::cout << *it << std::endl;
        } else {
            std::cout << "Not Found" << std::endl;
        }

        s1.erase("charlie"); // returns iterator to next element
        printSet(s1);

        s1.erase("abc");
        printSet(s1);

        s1.clear();
        printSet(s1);

        // ======================== Questions ========================
        /*
        Given N strings, print unique strings in lexicographical order.
        N <= 10^6
        |S| <= 100
        */
        int N;
        std::cout << "Enter number of strings: ";
        std::cin >> N;
        std::set<std::string> uniqueStrings;
        std::cout << "Enter strings: " << std::endl;
        for (int i = 0; i < N; ++i) {
            std::string s;
            std::cin >> s;
            uniqueStrings.insert(s);
        }

        std::cout << "Unique strings in lexicographical order: " << std::endl;
        for (const auto& str : uniqueStrings) {
            std::cout << str << std::endl;
        }

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception!" << std::endl;
    }
}