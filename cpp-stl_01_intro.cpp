/******************************************************************************
 * FILE        : stl_intro.cpp
 * DESCRIPTION : Overview of the C++ Standard Template Library (STL)
 * AUTHOR      : [Your Name]
 * DATE        : [Date]
 ******************************************************************************/

#include <iostream>   // Standard input/output stream

using namespace std;

/******************************************************************************
 * SECTION 1: STL Overview
 *
 * STL (Standard Template Library) is a powerful feature of C++ providing
 * built-in generic classes and functions.
 *
 * ============================================================================
 * 1. CONTAINERS
 *    ----------------
 *    These are data structures that store collections of objects.
 *    
 *    1.1 SEQUENTIAL CONTAINERS:
 *        - vector       : Dynamic array
 *        - stack        : LIFO data structure
 *        - queue        : FIFO data structure
 *        - pair         : Combines two values (not a full container)
 *
 *    1.2 ORDERED ASSOCIATIVE CONTAINERS:
 *        - map          : Key-value pairs, unique keys
 *        - multimap     : Allows duplicate keys
 *        - set          : Unique values
 *        - multiset     : Allows duplicate values
 *
 *    1.3 UNORDERED ASSOCIATIVE CONTAINERS:
 *        - unordered_map : Hash table implementation
 *        - unordered_set : Hash table set
 *
 *    1.4 NESTED CONTAINERS:
 *        - vector<vector<int>>                    : 2D array
 *        - map<int, vector<int>>                  : Mapping keys to lists
 *        - set<pair<int, string>>                 : Sorted unique pair values
 *        - vector<map<int, set<int>>>             : Complex nested structure
 *
 * ============================================================================
 * 2. ITERATORS
 *    ----------------
 *    Provide a way to access container elements via pointers.
 *    
 *    - begin(), end()            : Start and end of container
 *    - vector<int>::iterator it  : Declaration
 *    - Continuity                : Vectors (continuous), Sets/Maps (non-continuous)
 *
 * ============================================================================
 * 3. ALGORITHMS
 *    ----------------
 *    Pre-defined functions for processing data.
 *
 *    - sort()                    : Sorts a range
 *    - upper_bound(), lower_bound() : Based on binary search
 *    - max_element(), min_element()
 *    - accumulate()              : Sum of range
 *    - reverse(), count(), find()
 *    - next_permutation(), prev_permutation()
 *
 * ============================================================================
 * 4. FUNCTORS
 *    ----------------
 *    Objects that can be used as functions (i.e., classes with overloaded () operator)
 *
 *****************************************************************************/

int main() {
    // Print STL Overview
    cout << "******************************************************************************\n";
    cout << " * SECTION 1: STL Overview\n";
    cout << " *\n";
    cout << " * STL (Standard Template Library) is a powerful feature of C++ providing\n";
    cout << " * built-in generic classes and functions.\n";
    cout << " *\n";
    cout << " * ============================================================================\n";
    cout << " * 1. CONTAINERS\n";
    cout << " *    ----------------\n";
    cout << " *    These are data structures that store collections of objects.\n";
    cout << " *    \n";
    cout << " *    1.1 SEQUENTIAL CONTAINERS:\n";
    cout << " *        - vector       : Dynamic array\n";
    cout << " *        - stack        : LIFO data structure\n";
    cout << " *        - queue        : FIFO data structure\n";
    cout << " *        - pair         : Combines two values (not a full container)\n";
    cout << " *\n";
    cout << " *    1.2 ORDERED ASSOCIATIVE CONTAINERS:\n";
    cout << " *        - map          : Key-value pairs, unique keys\n";
    cout << " *        - multimap     : Allows duplicate keys\n";
    cout << " *        - set          : Unique values\n";
    cout << " *        - multiset     : Allows duplicate values\n";
    cout << " *\n";
    cout << " *    1.3 UNORDERED ASSOCIATIVE CONTAINERS:\n";
    cout << " *        - unordered_map : Hash table implementation\n";
    cout << " *        - unordered_set : Hash table set\n";
    cout << " *\n";
    cout << " *    1.4 NESTED CONTAINERS:\n";
    cout << " *        - vector<vector<int>>                    : 2D array\n";
    cout << " *        - map<int, vector<int>>                  : Mapping keys to lists\n";
    cout << " *        - set<pair<int, string>>                 : Sorted unique pair values\n";
    cout << " *        - vector<map<int, set<int>>>             : Complex nested structure\n";
    cout << " *\n";
    cout << " * ============================================================================\n";
    cout << " * 2. ITERATORS\n";
    cout << " *    ----------------\n";
    cout << " *    Provide a way to access container elements via pointers.\n";
    cout << " *    \n";
    cout << " *    - begin(), end()            : Start and end of container\n";
    cout << " *    - vector<int>::iterator it  : Declaration\n";
    cout << " *    - Continuity                : Vectors (continuous), Sets/Maps (non-continuous)\n";
    cout << " *\n";
    cout << " * ============================================================================\n";
    cout << " * 3. ALGORITHMS\n";
    cout << " *    ----------------\n";
    cout << " *    Pre-defined functions for processing data.\n";
    cout << " *\n";
    cout << " *    - sort()                    : Sorts a range\n";
    cout << " *    - upper_bound(), lower_bound() : Based on binary search\n";
    cout << " *    - max_element(), min_element()\n";
    cout << " *    - accumulate()              : Sum of range\n";
    cout << " *    - reverse(), count(), find()\n";
    cout << " *    - next_permutation(), prev_permutation()\n";
    cout << " *\n";
    cout << " * ============================================================================\n";
    cout << " * 4. FUNCTORS\n";
    cout << " *    ----------------\n";
    cout << " *    Objects that can be used as functions (i.e., classes with overloaded () operator)\n";
    cout << " *\n";
    cout << " *****************************************************************************/\n\n";

    // Local variable using MISHRA naming convention
    string str_msg = "Hello World. Welcome to STL. (Standard Template Library).";

    // Print STL welcome message
    cout << str_msg << endl;

    return 0;
}


