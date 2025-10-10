#include <iostream>
#include <typeinfo>
#include <exception>
#include <vector>
#include <string>

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
        std::vector<int> ::iterator it;
        for (it = v.begin(); it != v.end(); it++) {
            std::cout << *it;
            if (it + 1 != v.end())
                std::cout << ", ";
        }
        std::cout << std::endl;

        // Method 03: Print vector using range-based for loop
        for (const auto& e : v) {
            std::cout << e;
            if (&e != &v.back())
                std::cout << ", ";
        }
        std::cout << std::endl;

        // Method 04: Print vector using typeid
        for (auto it = v.begin(); it != v.end(); it++) {
            std::cout << *it;
            if (it + 1 != v.end())
                std::cout << ", ";
        }
        std::cout << std::endl << std::endl;


        // ==================== Vector of Pairs =======================
        std::vector<std::pair<int, int>> vp = {
            {1, 2},
            {3, 4},
            {5, 6},
            {7, 8}
        };
        /*
        `(*iterator).first <=> iterator->first`
        These two things are same.
        */
       // Method 01: Print vector of pairs using iterators
        std::vector<std::pair<int, int>>::iterator itr;
        for (itr = vp.begin(); itr != vp.end(); itr++) {
            std::cout << "(" << (*itr).first << ", " << (*itr).second << ")";
            if (itr + 1 !=  vp.end())
                std::cout << ", ";
        }
        std::cout << std::endl;

        // Method 02: Print vector of pairs using iterators with arrow operator
        for (itr = vp.begin(); itr != vp.end(); itr++) {
            std::cout << "(" << itr->first << ", " << itr->second << ")";
            if (itr + 1 != vp.end())
                std::cout << ", ";
        }
        std::cout << std::endl;

        // Method 03: Print vector of pairs using range-based for loop
        for (const auto& p : vp) {
            std::cout << "(" << p.first << ", " << p.second << ")";
            if (&p != &vp.back())
                std::cout << ", ";
        }
        std::cout << std::endl;

        // Method 04: Print vector of pairs using typeid
        for (auto it = vp.begin(); it != vp.end(); it++) {
            std::cout << "(" << it->first << ", " << it->second << ")";
            if (it + 1 != vp.end())
                std::cout << ", ";
        }
        std::cout << std::endl;
        
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception" << std::endl;
    }
}