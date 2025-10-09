#include <bits/stdc++.h>

using namespace std;

// ====================== MACROS DEFINITIONS =======================
// #define MACRO_STATIC_VECTOR_OF_PAIR
// #define MACRO_DYNAMIC_VECTOR_OF_PAIR
// #define MACRO_VOP_VERSION 0
// #define MACRO_ARRAY_OF_VECTOR
#define MACRO_VECTOR_OF_VECTOR

// ==================== FUNCTION DECLARATIONS ======================
template<typename T>
void PRINT_VECTOR(vector<T>& vct);

template<typename T1, typename T2>
void PRINT_VECTOR(vector<pair<T1, T2>>& vct);

template<typename T>
void INPUT_VECTOR(vector<T>& vct, int size_of_vector);

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
    // ------------------------------------------------------
    #if MACRO_VOP_VERSION == 1
        vector<pair<int, string>> vp2;
        int size_of_vp2;
        cout << "Enter the size of vector vp2<int, string>: "; 
        cin >> size_of_vp2;
        if (cin.fail()) {
            cin.clear();               // Clear the error flags
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   // Remove bad input from buffer
        }

        INPUT_VECTOR(vp2, size_of_vp2);
        PRINT_VECTOR(vp2);
    // -----------------------------------------------------

    // -----------------------------------------------------
    #elif MACRO_VOP_VERSION == 2
        vector<pair<string, float>> vp3;
        int size_of_vp3;
        cout << "Enter the size of vector vp3<string, float>: ";
        cin >> size_of_vp3;
        if (cin.fail()) {
            cin.clear();               // Clear the error flags
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   // Remove bad input from buffer
        }

        INPUT_VECTOR(vp3, size_of_vp3);
        PRINT_VECTOR(vp3);
    // -----------------------------------------------------

    // -----------------------------------------------------
    #elif MACRO_VOP_VERSION == 3
        vector<pair<int, float>> vp4;
        int size_of_vp4;
        cout << "Enter the size of vector vp4<int, float>: ";
        cin >> size_of_vp4;
        if (cin.fail()) {
            cin.clear();               // Clear the error flags
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   // Remove bad input from buffer
        }

        INPUT_VECTOR(vp4, size_of_vp4);
        PRINT_VECTOR(vp4);
    #endif
    // -----------------------------------------------------
#endif

#ifdef MACRO_ARRAY_OF_VECTOR
    int size_of_array_of_vector;
    cout << "Enter the size of array of vector: ";
    cin >> size_of_array_of_vector;
    if (cin.fail()) {
        cin.clear();               // Clear the error flags
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   // Remove bad input from buffer
    }

    vector<int> *av = new vector<int>[size_of_array_of_vector];

    // input array of vectors
    int elements, input;
    for (int i = 0; i < size_of_array_of_vector; i++) {
        cout << "Enter the number of elements for vector: ";
        cin >> elements;
        if (cin.fail()) {
            cin.clear();               // Clear the error flags
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   // Remove bad input from buffer
        }
        for (int j = 0; j < elements; j++){
            cout << "Enter value: ";
            cin >> input;
            if (cin.fail()) {
                cin.clear();               // Clear the error flags
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   // Remove bad input from buffer
            }
            av[i].push_back(input);
        }
    }

    // print array of vector
    for (int i = 0; i < size_of_array_of_vector; i++) {
        PRINT_VECTOR(av[i]);
    }
#endif

#ifdef MACRO_VECTOR_OF_VECTOR
    vector<vector<int>> vv;

    int size_of_vector_of_vector;
    std::cout << "Enter size of vector of vector: ";
    std::cin >> size_of_vector_of_vector;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    
    // input vector of vector
    int size_of_vector;
    for (int i = 0; i < size_of_vector_of_vector; i++) {
        vector<int> temp_vct;
        std::cout << "Enter the size of vector: ";
        std::cin >> size_of_vector;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        INPUT_VECTOR(temp_vct, size_of_vector);

        vv.push_back(temp_vct);
    }

    // print vector of vector
    std::cout << std::endl << "Vector of Vector: " << std::endl;
    for (int i = 0; i < vv.size(); i++) {
        PRINT_VECTOR(vv[i]);
    }

#endif

    return 0;
}


// ==================== FUNCTION DEFINITIONS =======================
// Print the vector
template<typename T>
void PRINT_VECTOR(vector<T>& vct) {
    cout << "[";
    for (int i = 0; i < vct.size(); i++) {
        cout << vct[i];
        if (i + 1 != vct.size())
            cout << ", ";
    }
    cout << "]" << endl;
}


// Print the vector of pairs.
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


template<typename T>
void INPUT_VECTOR(std::vector<T>& vct, int size_of_vector) {
    vct.clear();  // clear old data

    try {
        T element;
        for (std::size_t i = 0; i < static_cast<std::size_t>(size_of_vector); ++i) {
            std::cout << "Enter value #" << i + 1 << " : ";
            std::cin >> element;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                throw std::runtime_error("Invalid input detected!");
            }

            vct.push_back(element);
        }

    } catch (const std::exception& e) {
        std::cerr << "Input Vector error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown error occurred while inputting vector." << std::endl;
    }
}


// Input vector of pairs
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
            if (cin.fail()) {
                cin.clear();               // Clear the error flags
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   // Remove bad input from buffer
            }
        }

        cout << "Item " << i+1 << ": Enter Second Value: ";
        if constexpr (is_same<T2, string>::value) {
            getline(cin, temp.second);
        } else {
            cin >> temp.second;
            if (cin.fail()) {
                cin.clear();               // Clear the error flags
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   // Remove bad input from buffer
            }
        }

        vct.push_back(temp);
        cout << endl;
    }
}

