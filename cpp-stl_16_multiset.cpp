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

        // ======================== Questions ========================
        /*
        Problem: Monk and the Magical Candy Bags
        Our Monk Loves Candy.
        While taking a stroll in the park, he stumbled upon N Bags of Candies. The ith of these bags contains Ai candies.
        He picks up a bag, eats all the candies in it and drops it on the ground. But as soon as he drops the bag,
        the number of candies in the bag magically! Say the bag that used to contain X candies (before eating), now contains [X/2] candies!,
        where [X] is the greatest integer less than X (Greater Integer Function).
        Amazed by the magical spell, Monk can now have a log more candies! But he has to return home in K minutes.
        In a single minute, Monk can consume all the candies in a single bag, regardless of the number of candies in it.
        Find the maximum number of candies that Monk has consumed.
        
        Input:
        The first line contains T, the number of test cases. T test cases follow.
        First line of each test case contains two integers N and K.
        Second line of each test case contains N integers, denoting the number of candies in each bag.

        Output:
        Print the answer to each test case in a new line.

        Constraints:
        1 ≤ T ≤ 10
        1 ≤ N ≤ 10^5
        0 ≤ K ≤ 10^5
        0 ≤ Ai ≤ 10^10
        */
        int T;
        std::cout << "Enter number of test cases: "; 
        std::cin >> T;
        while (T--) {
            int N, K;
            std::cout << "Enter N and K: ";
            std::cin >> N >> K;

            std::multiset<long long> candyBags;

            std::cout << "Enter candy bags: " << std::endl;
            for (int i=0; i<N; ++i) {
                long long candy_ct;
                std::cin >> candy_ct;
                candyBags.insert(candy_ct);
            }

            long long totalCandies = 0;

            for (int i = 0; i < K; ++i) {
                auto last_it = --candyBags.end(); // iterator to the bag with maximum candies
                long long candy_ct = *last_it;
                totalCandies += candy_ct;
                candyBags.erase(last_it);
                candyBags.insert(candy_ct / 2);
            }
            std::cout << totalCandies << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception!" << std::endl;
    }
}


