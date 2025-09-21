#include <bits/stdc++.h>

using namespace std;

/*
# Pair: To make relation between two values.
pair<data_type_1, data_type_2>

data_type_1: primitive data type, stl data type and user define data type.
data_type_2: primitive data type, stl data type and user define data type.
*/

int main() {

    // Method 01 : To initialise the pair.
    cout << "=============== Method 01 ===============" << endl;
    pair<int, string> p1;
    p1 = make_pair(458, "Abhishek");
    cout << "Pair : " << p1.first << ", " << p1.second << endl;
    cout << "============== X == X == X ==============" << endl << endl;

    // Method 02 : To initialise the pair.
    cout << "=============== Method 02 ===============" << endl;
    pair<int, string> p2;
    p2 = {459, "Aman Singh"};
    cout << "Pair : " << p2.first << ", " << p2.second << endl;
    cout << "============== X == X == X ==============" << endl << endl;

    // Copy of pair
    cout << "============= Copy of Pair ==============" << endl;
    pair<int, string> p;
    p = {460, "Aryan Singh"};
    cout << "Pair P : " << p.first << ", " << p.second << endl;

    pair<int, string> p3 = p;
    cout << "Pair P3 : " << p3.first << ", " << p3.second << endl << endl;

    p.first = 461;
    p.second = "Brijesh Pathak";
    cout << "Pair P : " << p.first << ", " << p.second << endl;
    cout << "Pair P3 : " << p3.first << ", " << p3.second << endl << endl;

    p3.first = 462;
    p3.second = "Bhanu Pratap";
    cout << "Pair P : " << p.first << ", " << p.second << endl;
    cout << "Pair P3 : " << p3.first << ", " << p3.second << endl;
    cout << "============== X == X == X ==============" << endl << endl;

    // Reference of pair
    cout << "========== Reference of Pair ============" << endl;
    pair<int, string> &p4 = p;
    cout << "Pair P : " << p.first << ", " << p.second << endl;
    cout << "Pair P4 : " << p4.first << ", " << p4. second << endl << endl;

    p.first = 463;
    p.second = "Danish";
    cout << "Pair P : " << p.first << ", " << p.second << endl;
    cout << "Pair P4 : " << p4.first << ", " << p4. second << endl << endl;

    p4.first = 464;
    p4.second = "Dinesh Shukla";
    cout << "Pair P : " << p.first << ", " << p.second << endl;
    cout << "Pair P4 : " << p4.first << ", " << p4. second << endl;
    cout << "============== X == X == X ==============" << endl << endl;

    // Array of pairs
    cout << "=========== Array of Pairs ==============" << endl;
    pair<int, string> p_arr[5];
    p_arr[0] = {1, "Abhishek Shukla"};
    p_arr[1] = {2, "Aman Singh"};
    p_arr[2] = {3, "Akash Singh"};
    p_arr[3] = {4, "Brijesh Shukla"};
    p_arr[4] = {5, "Charu Chauhan"};

    for(int i=0; i<5; i++) {
        cout << i << ": " << p_arr[i].first << ", " << p_arr[i].second << endl;
    }
    cout << endl;

    swap(p_arr[0], p_arr[3]);
    swap(p_arr[2], p_arr[4]);

    for(int i=0; i<5; i++) {
        cout << i << ": " << p_arr[i].first << ", " << p_arr[i].second << endl;
    }
    cout << endl << endl;

    // Take input from user.
    cout << "======== User Input for Pair =========" << endl;
    pair<string, double> emp;
    cout << "Enter You Name: "; cin >> emp.first;
    cout << "Enter Your emp: "; cin >> emp.second; 

    cout << emp.first << ", " << emp.second << endl;

    return 0;
}
