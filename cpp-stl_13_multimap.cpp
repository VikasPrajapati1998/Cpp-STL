/*
C++ STL - unordered_map use hash table to store key-value pairs.
1. inbuilt implementation
2. time complexity
3. valid keys datatype
*/

/*
Multimap<T1, T2> : 
    Multimaps allow multiple values to be associated with a single key.
    They are useful when you need to store duplicate keys.
*/

#include <iostream>
#include <vector>
#include <string>
#include <exception>
#include <map>
#include <unordered_map>

template <typename T1, typename T2>
void printMap(const std::multimap<T1, T2>& m) {
    std::cout << "multimap: " << m.size() << std::endl;
    for (const auto& value : m) {
        std::cout << value.first << " : " << value.second << std::endl;
    }
    std::cout << std::endl;
}

template <typename T1, typename T2>
void printMap(const std::unordered_multimap<T1, T2>& m) {
    std::cout << "unordered_multimap: " << m.size() << std::endl;
    for (const auto& value : m) {
        std::cout << value.first << " : " << value.second << std::endl;
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[]) {
    try {
        // ======================== Multimap Initialization ========================
        std::multimap<int, std::string> multiMap = {
            {1, "alpha"},
            {2, "beta"},
            {2, "gamma"},
            {3, "delta"},
            {3, "epsilon"},
            {3, "zeta"}
        };
        
        printMap(multiMap);
        multiMap.insert({2, "theta"});
        printMap(multiMap);

        // ======================== Unordered_multimap ========================
        std::unordered_multimap<int, std::string> unordMultiMap = {
            {1, "alpha"},
            {2, "beta"},
            {2, "gamma"},
            {3, "delta"},
            {3, "epsilon"},
            {3, "zeta"}
        };
        printMap(unordMultiMap);
        unordMultiMap.insert({2, "theta"});
        printMap(unordMultiMap);

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception!" << std::endl;
    }
}
