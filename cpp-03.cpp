#include <iostream>
#include <string>
using namespace std;

// Generic template
template <typename T>
const char* getTypeName() {
    return typeid(T).name();  // fallback to default
}

// Specializations
template <>
const char* getTypeName<int>() {
    return "int";  // or "int" if you prefer
}

template <>
const char* getTypeName<float>() {
    return "float";
}

template <>
const char* getTypeName<char>() {
    return "char";
}

template <>
const char* getTypeName<string>() {
    return "string";  // Custom override for std::string
}

int main() {
    int x = 42;
    cout << "Type of x is: " << getTypeName<decltype(x)>() << endl;

    float y = 42.34f;
    cout << "Type of y is: " << getTypeName<decltype(y)>() << endl;

    char z = 'a';
    cout << "Type of z is: " << getTypeName<decltype(z)>() << endl;

    string s = "beta";
    cout << "Type of s is: " << getTypeName<decltype(s)>() << endl;

    return 0;
}

