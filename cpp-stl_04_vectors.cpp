#include <bits/stdc++.h>
using namespace std;

// ====================== MACROS DECLARATIONS ======================
#define MACRO_ARRAY
#define MACRO_VECTOR
#define MACRO_COPY_REFERENCE_VECTOR
#define MACRO_INPUT_VECTOR

// ===================== FUNCTION DECLARATIONS =====================
template<typename T>
void PRINT_VECTOR(const vector<T>& v);

template<typename T>
void PRINT_ARRAY(const T arr[], int size_of_array);

template<typename T>
void SHOW_VECTOR(const vector<T>& v);

template<typename T>
void INPUT_VECTOR(vector<T>& vct, int size);

// ========================= MAIN FUNCTION =========================
int main() {
#ifdef MACRO_ARRAY
    // ========== ARRAY PART ==========
    int m;
    cout << "Enter the size of array: ";
    cin >> m;

    if (m <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    int arr[m]; // VLA (allowed in GCC but not standard C++)
    for (int j = 0; j < m; j++) {
        cout << "Enter " << j + 1 << " Value: ";
        cin >> arr[j];
        PRINT_ARRAY(arr, m);
    }
#endif

#ifdef MACRO_VECTOR
    // ========== VECTOR PART ==========
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid vector size!" << endl;
        return 1;
    }

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter " << i + 1 << " Value: ";
        cin >> x;
        v.push_back(x);
        PRINT_VECTOR(v);
    }

    cout << "Size of Vector: " << v.size() << endl;
    PRINT_VECTOR(v);
#endif

#ifdef MACRO_COPY_REFERENCE_VECTOR
    // ========== COPY vs REFERENCE ==========
    vector<int> v1(5);  // Default initialized to 0
    PRINT_VECTOR(v1);
    v1.push_back(7);
    PRINT_VECTOR(v1);

    vector<int> v2(5, 3); // Size = 5, all values = 3
    PRINT_VECTOR(v2);
    v2.push_back(8);
    PRINT_VECTOR(v2);

    v2.pop_back();
    PRINT_VECTOR(v2);

    // Copy of vector (O(n))
    vector<int> v3 = v2;
    v3.push_back(9);
    SHOW_VECTOR(v2);
    SHOW_VECTOR(v3);

    // Reference to vector
    vector<int> v4 = {2, 3, 4, 5, 6, 7};
    vector<int>& v5 = v4;

    cout << "Actual Vector: "; SHOW_VECTOR(v4);
    cout << "Reference Vector: "; SHOW_VECTOR(v5);

    v4.push_back(11);
    cout << "After push_back:\n";
    cout << "Actual Vector: "; SHOW_VECTOR(v4);
    cout << "Reference Vector: "; SHOW_VECTOR(v5);
#endif

#ifdef MACRO_INPUT_VECTOR
    // ========== VECTOR OF STRINGS ==========
    int size;
    cout << "Enter the number of students: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }

    vector<string> students;
    INPUT_VECTOR(students, size);
    PRINT_VECTOR(students);
#endif

    return 0;
}

// ===================== FUNCTION DEFINITIONS =====================

template<typename T>
void PRINT_VECTOR(const vector<T>& v) {
    cout << "Vector: [";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i + 1 != v.size()) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

template<typename T>
void PRINT_ARRAY(const T arr[], int size_of_array) {
    cout << "Array: [";
    for (int i = 0; i < size_of_array; ++i) {
        cout << arr[i];
        if (i + 1 != size_of_array) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

template<typename T>
void SHOW_VECTOR(const vector<T>& v) {
    cout << "Vector: [";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i + 1 != v.size()) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

template<typename T>
void INPUT_VECTOR(vector<T>& vct, int size) {
    T value;
    cout << "Enter the values:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Value " << i + 1 << ": ";
        cin >> value;
        vct.push_back(value);
    }
}




