#include <bits/stdc++.h>
using namespace std;

// Comment this line to compile the vector part instead
#define MACRO_ARRAY
#define MACRO_VECTOR
#define MACRO_COPY_REFERENCE_VECTOR
#define MACRO_INPUT_VECTOR

// ===================== FUNCTION DECLARATIONS =====================
template<typename T> 
void PRINT_VECTOR(vector<T> v);

void PRINT_ARRAY(int arr[], int size_of_array);

void SHOW_VECTOR(vector<int> &v);

template<typename T>
void INPUT_VECTOR(vector<T> &vct, int size_of_vector);

void INPUT_VECTOR(vector<string>& vct, int size_of_vector);

// ======================== MAIN FUNCTION ==========================
int main(int argc, char *argv[]) {
#ifdef MACRO_ARRAY
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

#ifdef MACRO_VECTOR
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

#ifdef MACRO_COPY_REFERENCE_VECTOR
    // STATIC VECTOR
    vector<int> v1(5);
    PRINT_VECTOR(v1);
    v1.push_back(7);
    PRINT_VECTOR(v1);
    cout << endl;

    vector<int> v2(5, 3); // (size_of_vector, filled_number)
    PRINT_VECTOR(v2);
    v2.push_back(8);  // O(1)
    PRINT_VECTOR(v2);
    cout << endl;

    // pop_back() 
    // int value = v2.pop_back();  // O(1)    // to store the last elelment into a variable is not possible because the return type of pop_back is void
    v2.pop_back();  // O(1)
    PRINT_VECTOR(v2);

    // COPY OF VECTOR
    /*Copy is a costly process in Cpp. Because it's time complexity is O(n). So always try to pass the reference of vector rather than create a new copy.*/
    vector<int> v3 = v2;  // O(n)
    v3.push_back(9);
    SHOW_VECTOR(v2);
    SHOW_VECTOR(v3);

    // REFRENCE OF VECTOR
    /*Reference is pointing the same vector. So if we make changes in anyone of them that will be reflect on the other one.*/
    vector<int> v4 = {2, 3, 4, 5, 6, 7};    // Actual Vector
    vector<int> &v5 =  v4;                  // Reference Vector
    cout << "Actual Vector: "; SHOW_VECTOR(v4);
    cout << "Reference Vector: "; SHOW_VECTOR(v5);

    v4.push_back(11);
    cout << "Actual Vector: "; SHOW_VECTOR(v4);
    cout << "Reference Vector: "; SHOW_VECTOR(v5);
#endif

#ifdef MACRO_INPUT_VECTOR
    // Vector of String
    vector<string> vct1;
    int size;
    cout << "Enter the size of vector: ";
    cin >> size;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    INPUT_VECTOR(vct1, size);
    PRINT_VECTOR(vct1);


#endif


    return 0;
}

// ===================== FUNCTION DEFINITIONS =======================
template<typename T>
void PRINT_VECTOR(vector<T> v) {
    cout << "Vector: [";
    for (int i=0; i<v.size(); i++) {
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

void SHOW_VECTOR(vector<int> &v) {
    cout << "Vector: [";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i + 1 != v.size()) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

template<typename T>
void INPUT_VECTOR(vector<T>& vct, int size_of_vector) {
    T item;
    cin.clear();
    for(int i=0; i<size_of_vector; i++) {
        cout << "Item " << i+1 << " : ";
        cin >> item;
        vct.push_back(item);
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void INPUT_VECTOR(vector<string>& vct, int size_of_vector) {
    string item;
    cin.clear();
    for(int i=0; i<size_of_vector; i++) {
        cout << "Item " << i+1 << " : ";
        getline(cin, item);
        vct.push_back(item);
    }
}
