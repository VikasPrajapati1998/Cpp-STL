#include <iostream>
#include <vector>
#include <set> 
#include <string>
#include <exception>

template <typename T>
void printSet(const std::multiset<T>& s) {
    std::cout << "multiset: " << s.size() << std::endl;
    for (const auto& value : s) {
        std::cout << value << ", ";
    }
    std::cout << std::endl << std::endl;
}

int main(int argc, char* argv[]) {
    try {
        // ======================== Multiset Initialization ========================
        std::multiset<std::string> s1  = {"alpha", "beta", "gamma", "delta", "charlie", "epsilon"};
        s1.insert("zeta");
        s1.insert("beta"); // duplicate, will be added
        s1.insert("delta"); // duplicate, will be added
        s1.insert("zeta"); // duplicate, will be added
        printSet(s1);

        auto it = s1.find("beta");
        if (it != s1.end()) {
            std::cout << "Find: " << *it << std::endl;
        } else {
            std::cout << "Not Found" << std::endl;
        }
        s1.erase(it); // removes only one occurrence of "beta"
        printSet(s1);

        s1.erase("delta"); // removes all occurrences of "delta"
        printSet(s1);

        s1.clear();
        printSet(s1);
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception!" << std::endl;
    }
}


