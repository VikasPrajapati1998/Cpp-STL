#include <bits/stdc++.h>
using namespace std;

/*
* Demonstration of std::pair usage in C++.
* Covers: initialization, copying, referencing, arrays, and user input.
*/

int main(int argc, char* argv[]) {
    // ========== Method 01: Initialization using make_pair ==========
    cout << "=============== Method 01 ===============" << endl;
    pair<int, string> s32_pair01;
    s32_pair01 = make_pair(458, "Abhishek");

    cout << "Pair : " << s32_pair01.first << ", " << s32_pair01.second << endl;
    cout << "============== X == X == X ==============" << endl << endl;

    // ========== Method 02: Initialization using initializer list ==========
    cout << "=============== Method 02 ===============" << endl;
    pair<int, string> s32_pair02 = {459, "Aman Singh"};

    cout << "Pair : " << s32_pair02.first << ", " << s32_pair02.second << endl;
    cout << "============== X == X == X ==============" << endl << endl;

    // ========== Copy of a Pair ==========
    cout << "============= Copy of Pair ==============" << endl;

    pair<int, string> s32_pair03 = {460, "Aryan Singh"};
    cout << "Original Pair (P): " << s32_pair03.first << ", " << s32_pair03.second << endl;

    pair<int, string> s32_pairCopy = s32_pair03;
    cout << "Copied Pair (P3): " << s32_pairCopy.first << ", " << s32_pairCopy.second << endl << endl;

    // Modify original pair
    s32_pair03.first = 461;
    s32_pair03.second = "Brijesh Pathak";

    cout << "Modified Original Pair (P): " << s32_pair03.first << ", " << s32_pair03.second << endl;
    cout << "Unchanged Copied Pair (P3): " << s32_pairCopy.first << ", " << s32_pairCopy.second << endl << endl;

    // Modify copied pair
    s32_pairCopy.first = 462;
    s32_pairCopy.second = "Bhanu Pratap";

    cout << "Original Pair (P): " << s32_pair03.first << ", " << s32_pair03.second << endl;
    cout << "Modified Copied Pair (P3): " << s32_pairCopy.first << ", " << s32_pairCopy.second << endl;
    cout << "============== X == X == X ==============" << endl << endl;

    // ========== Reference to a Pair ==========
    cout << "========== Reference of Pair ============" << endl;

    pair<int, string>& ref_pair04 = s32_pair03;

    cout << "Original (P): " << s32_pair03.first << ", " << s32_pair03.second << endl;
    cout << "Reference (P4): " << ref_pair04.first << ", " << ref_pair04.second << endl << endl;

    // Modify through original
    s32_pair03.first = 463;
    s32_pair03.second = "Danish";

    cout << "Original (P): " << s32_pair03.first << ", " << s32_pair03.second << endl;
    cout << "Reference (P4): " << ref_pair04.first << ", " << ref_pair04.second << endl << endl;

    // Modify through reference
    ref_pair04.first = 464;
    ref_pair04.second = "Dinesh Shukla";

    cout << "Original (P): " << s32_pair03.first << ", " << s32_pair03.second << endl;
    cout << "Reference (P4): " << ref_pair04.first << ", " << ref_pair04.second << endl;
    cout << "============== X == X == X ==============" << endl << endl;

    // ========== Array of Pairs ==========
    cout << "=========== Array of Pairs ==============" << endl;

    pair<int, string> arr_pairList[5];
    arr_pairList[0] = {1, "Abhishek Shukla"};
    arr_pairList[1] = {2, "Aman Singh"};
    arr_pairList[2] = {3, "Akash Singh"};
    arr_pairList[3] = {4, "Brijesh Shukla"};
    arr_pairList[4] = {5, "Charu Chauhan"};

    for (int s32_i = 0; s32_i < 5; s32_i++) {
        cout << s32_i << ": " << arr_pairList[s32_i].first << ", " << arr_pairList[s32_i].second << endl;
    }

    cout << endl;

    // Swap elements in pair array
    swap(arr_pairList[0], arr_pairList[3]);
    swap(arr_pairList[2], arr_pairList[4]);

    for (int s32_i = 0; s32_i < 5; s32_i++) {
        cout << s32_i << ": " << arr_pairList[s32_i].first << ", " << arr_pairList[s32_i].second << endl;
    }

    cout << endl << endl;

    // ========== User Input for Pair ==========
    cout << "======== User Input for Pair =========" << endl;

    pair<string, double> user_emp;
    cout << "Enter Your Name: "; 
    cin >> user_emp.first;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Your Salary: "; 
    cin >> user_emp.second;

    cout << "Employee Info: " << user_emp.first << ", " << user_emp.second << endl;

    return 0;
}
