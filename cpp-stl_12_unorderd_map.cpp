/*
C++ STL - unordered_map use hash table to store key-value pairs.
1. inbuilt implementation
2. time complexity
3. valid keys datatype
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <exception>
#include <map>
#include <vector>

template <typename T1, typename T2>
void printMap(const std::unordered_map<T1, T2>& m) {
    std::cout << "unordered_map: " << m.size() << std::endl;
    for (const auto& value : m) {
        std::cout << value.first << " : " << value.second << std::endl;
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[]) {
    try {
        // ======================== Unorderded Map Initialization ========================
        std::unordered_map<int, std::string> m1 = {
            {1, "alpha"},
            {2, "beta"},
            {3, "gamma"},
            {4, "delta"}
        };
        m1.insert({5, "epsilon"});
        printMap(m1);
        
        std::cout << m1[2] << std::endl; // O(1) 

        auto it = m1.find(3);
        if (it != m1.end()) {
            std::cout << it->first << " : " << it->second << std::endl;
        } else {
            std::cout << "Not Found" << std::endl;
        }

        m1.clear();
        printMap(m1);

        /*
        Questions:
        Given N strings and Q queries. For each query you are given a string, print frequency of that string in the given N strings.
        N <= 10^6
        |S| <= 100
        Q <= 10^6
        */

        int N;
        std::cout << "Enter number of strings: ";
        std::cin >> N;
        std::unordered_map<std::string, int> freqMap;
        std::cout << "Enter strings: " << std::endl;
        for (int i = 0; i < N; ++i) {
            std::string s;
            std::cin >> s;
            freqMap[s]++;
        }
        printMap(freqMap);

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception!" << std::endl;
    }
}