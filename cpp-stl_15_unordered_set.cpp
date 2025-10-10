/*
You can not have the complex data types as the key in unordered_set.
The implementation of unordered_set uses hash table to store the values.
*/
#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
#include <exception>

template <typename T>
void printSet(const std::unordered_set<T>& s) {
    std::cout << "unordered_set: " << s.size() << std::endl;
    for (const auto& value : s) {
        std::cout << value << ", ";
    }
    std::cout << std::endl << std::endl;
}

int main(int argc, char* argv[]) {
    try {
        // ======================== Unordered Set Initialization ========================
        std::unordered_set<std::string> s1  = {"alpha", "beta", "gamma", "delta", "charlie", "epsilon"};
        s1.insert("zeta");
        s1.insert("beta"); // duplicate, will be ignored
        printSet(s1);

        auto it = s1.find("charlie");
        if (it != s1.end()) {
            std::cout << "Find: " << *it << std::endl;
        } else {
            std::cout << "Not Found" << std::endl;
        }

        s1.erase("charlie");
        printSet(s1);

        // Questions:
        /*
        Given N strings and Q queries. In each query you are given a string, print yes if string is present else print no.
        N <= 10^6
        |S| <= 100
        Q <= 10^6
        */
        int N;
        std::cout << "Enter number of strings: ";
        std::cin >> N;
        std::unordered_set<std::string> stringSet;
        std::cout << "Enter strings: " << std::endl;
        for (int i = 0; i < N; ++i) {
            std::string s;
            std::cin >> s;
            stringSet.insert(s);
        }
        int Q;
        std::cout << "Enter number of queries: ";
        std::cin >> Q;
        std::cout << "Enter queries: " << std::endl;
        for (int i = 0; i < Q; ++i) {
            std::string query;
            std::cin >> query;
            if (stringSet.find(query) != stringSet.end()) {
                std::cout << "yes" << std::endl;
            } else {
                std::cout << "no" << std::endl;
            }
        }
        
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception!" << std::endl;
    }
}