#include <bits/stdc++.h>
using namespace std;

// Comment this line to compile the vector part instead
// #define USE_ARRAY
// #define USE_VECTOR

// ===================== FUNCTION DECLARATIONS =====================
void PRINT_VECTOR(vector<int> v);
void PRINT_ARRAY(int arr[], int size_of_array);

// ======================== MAIN FUNCTION ==========================
int main() {
#ifdef USE_ARRAY
    // ========== ARRAY PART ==========
    int m, y;
    cout << "Enter the size of array: "; 
    cin >> m;

    int arr[m]; // VLA — supported by GCC but not standard C++
    for (int j = 0; j < m; j++) {
        y = 0;
        cout << "Enter " << j + 1 << " Value: "; 
        cin >> y;
        arr[j] = y;
        PRINT_ARRAY(arr, m);
    }
#endif

#ifdef USE_VECTOR
    // ========== VECTOR PART ==========
    vector<int> v;
    int n, x;
    cout << "Enter the size of vector: "; 
    cin >> n;

    for (int i = 0; i < n; i++) {
        x = 0;
        cout << "Enter " << i + 1 << " Value: "; 
        cin >> x;
        v.push_back(x);
        PRINT_VECTOR(v);
    }

    // size() method O(1)
    cout << "Size of Vector: " << v.size() << endl << endl;
    PRINT_VECTOR(v);
    cout << endl << endl;
#endif

    // static vector
    vector<int> v1(5);
    PRINT_VECTOR(v1);
    v1.push_back(7);
    PRINT_VECTOR(v1);
    cout << endl;

    vector<int> v2(5, 3); // (size_of_vector, filled_number)
    PRINT_VECTOR(v2);
    v2.push_back(8);
    PRINT_VECTOR(v2);
    cout << endl;


    return 0;
}

// ===================== FUNCTION DEFINITIONS =======================
void PRINT_VECTOR(vector<int> v) {
    cout << "Vector: [";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i + 1 != v.size()) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

void PRINT_ARRAY(int arr[], int size_of_array) {
    cout << "Array: [";
    for (int i = 0; i < size_of_array; i++) {
        cout << arr[i];
        if (i + 1 != size_of_array) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}
