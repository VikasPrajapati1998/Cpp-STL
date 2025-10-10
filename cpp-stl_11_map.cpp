/*
Maps : 
    Maps are associative containers that store elements in key-value pairs. Map is not contiguous in memory.
    Each key is unique, and it is used to access the corresponding value. Maps use red-black trees to maintain order.
    They provide O(log n) time complexity for search, insert, and delete operations. 

Unordered Maps: 
    Unordered maps are similar to maps but do not maintain any specific order of elements.
    They provide average O(1) time complexity for search, insert, and delete operations.

Multimaps: 
    Multimaps allow multiple values to be associated with a single key.
    They are useful when you need to store duplicate keys.

Unordered Multimaps: 
    Unordered multimaps are similar to multimaps but do not maintain any specific order of elements.  
    They also allow multiple values to be associated with a single key.
*/

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <exception>

template <typename T1, typename T2>
void printMap(const std::map<T1, T2>& m) {
    std::cout << "map: " << m.size() << std::endl;
    for (const auto& value : m) {
        std::cout << value.first << " : " << value.second << std::endl;
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[]) {
    try {
        // ======================== Map Initialization ========================
        std::map<int, std::string> m1 = {
            {1, "One"},
            {2, "Two"},
            {3, "Three"}
        };

        std::map<int, std::string> m2;
        m2[1] = "alpha";
        m2[2] = "beta";
        m2[3] = "gamma";
        m2.insert({4, "delta"});

        std::map<int, int> m3;

        // ======================== Map Traversal ========================
        std::cout << "Map m1 contents:" << std::endl;
        std::map<int, std::string>::iterator it;
        for (it = m1.begin(); it != m1.end(); ++it) {
            std::cout << it->first << " : " << it->second << std::endl;
        }
        std::cout << std::endl;

        std::cout << "Map m2 contents:" << std::endl;
        for (auto& value : m2) {
            std::cout << value.first << " : " << value.second << std::endl;
        }
        std::cout << std::endl;

        printMap(m1);
        printMap(m2);

        m3[4];
        printMap(m3);  // default value for int is 0
        m3[4] = 100;
        printMap(m3);

        // ======================== Map Operations ========================
        // find
        auto find_it = m2.find(2);  // O(log n)
        if (find_it != m2.end()) {
            std::cout << find_it->first << " : " << find_it->second << std::endl;
        } else {
            std::cout << "Key not found." << std::endl;
        }

        find_it = m2.find(8);  // O(log n)
        if (find_it != m2.end()) {
            std::cout << find_it->first << " : " << find_it->second << std::endl;
        } else {
            std::cout << "Key not found." << std::endl;
        }

        // erase
        m2.erase(3);  // O(log n)
        printMap(m2);

        if (find_it != m2.end()) {
            m2.erase(find_it);  // O(1)
        }
        printMap(m2);

        // insert
        m2.insert({3, "gamma"});  // O(log n)
        printMap(m2);

        // clear
        m3.clear();
        printMap(m3);


        /* 
        Questions: Given N strings, print unique strings in lexicographical order with their frequency.
        N <= 10^5
        |S| <= 100
        */

        std::map<std::string, int> wordCount;
        int N;
        std::cout << "Enter number of strings: ";
        std::cin >> N;

        for (int i = 0; i < N; i++) {
            std::string word;
            std::cin >> word;
            wordCount[word]++;
        }

        printMap(wordCount);
        

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        return 1;
    } catch (...) {
        std::cerr << "Unknown exception occurred" << std::endl;
        return 1;
    }
}
