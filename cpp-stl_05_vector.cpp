#include <bits/stdc++.h>
using namespace std;

// ====================== MACROS DEFINITIONS =======================
#define MACRO_STATIC_VECTOR_OF_PAIR
#define MACRO_DYNAMIC_VECTOR_OF_PAIR

// ==================== FUNCTION DECLARATIONS ======================
template<typename T1, typename T2>
void PRINT_VECTOR(vector<pair<T1, T2>>& vct);

template<typename T1, typename T2>
void INPUT_VECTOR(vector<pair<T1, T2>>& vct, int size_of_vector);

// ========================= DATA TYPE =============================
template <typename T> const char* dataType() { return typeid(T).name(); }

template <> const char* dataType<short>() { return "short"; }
template <> const char* dataType<int>() { return "int"; }
template <> const char* dataType<long>() { return "long"; }

template <> const char* dataType<float>() { return "float"; }
template <> const char* dataType<double>() { return "double"; }

template <> const char* dataType<char>() { return "char"; }
template <> const char* dataType<string>() { return "string"; }


// ======================== MAIN FUNCTION ==========================
int main(int argc, char* argv[]) {
#ifdef MACRO_STATIC_VECTOR_OF_PAIR   // Static vector of pairs
    vector<pair<int, string>> vp1 = {
        {1, "Aman"}, 
        {2, "Abhishek"}, 
        {3, "Aryan"}, 
        {4, "Brijesh"}, 
        {5, "Bhavya"}
    };
    PRINT_VECTOR(vp1);
#endif

#ifdef MACRO_DYNAMIC_VECTOR_OF_PAIR
    vector<pair<int, string>> vp2;
    int size_of_vp2;
    cout << "Enter the size of vector vp2: "; 
    cin >> size_of_vp2;
    cin.ignore();  // Clear buffer after integer input

    INPUT_VECTOR(vp2, size_of_vp2);
    PRINT_VECTOR(vp2);

    vector<pair<string, float>> vp3;
    int size_of_vp3;
    cout << "Enter the size of vector vp3: ";
    cin >> size_of_vp3;
    cin.ignore();

    INPUT_VECTOR(vp3, size_of_vp3);
    PRINT_VECTOR(vp3);
#endif

    return 0;
}

// ==================== FUNCTION DEFINITIONS =======================
template<typename T1, typename T2>
void PRINT_VECTOR(vector<pair<T1, T2>>& vct) {
    cout << "[";
    for(int i = 0; i < vct.size(); i++) {
        cout << "(" << vct[i].first << ", " << vct[i].second << ")";
        if(i + 1 != vct.size()) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

template<typename T1, typename T2>
void INPUT_VECTOR(vector<pair<T1, T2>>& vct, int size_of_vector) {
    for(int i = 0; i < size_of_vector; i++) {
        cout << "Item " << i+1 << ":-> " << endl;
        pair<T1, T2> temp;

        cout << "Item " << i+1 << ": Enter First Value: ";
        if constexpr (is_same<T1, string>::value) {
            getline(cin, temp.first);
        } else {
            cin >> temp.first;
            cin.ignore();  // Clear newline
        }

        cout << "Item " << i+1 << ": Enter Second Value: ";
        if constexpr (is_same<T2, string>::value) {
            getline(cin, temp.second);
        } else {
            cin >> temp.second;
            cin.ignore();  // Clear newline
        }

        vct.push_back(temp);
        cout << endl;
    }
}

