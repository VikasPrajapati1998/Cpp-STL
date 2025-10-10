#include <iostream>
#include <string>
#include <vector>
#include "data_type.hpp"

class MyClass {};

int main() {
    using namespace datatype;

    int a = 5;
    std::cout << "a: " << dataType<decltype(a)>() << std::endl;
    std::cout << typeid(a).name() << std::endl;

    std::string str = "hello";
    std::cout << "str: " << dataType<decltype(str)>() << std::endl;
    std::cout << typeid(str).name() << std::endl;

    unsigned long long ull = 123456789;
    std::cout << "ull: " << dataType<decltype(ull)>() << std::endl;
    std::cout << typeid(ull).name() << std::endl;

    MyClass obj;
    std::cout << "obj: " << dataType<decltype(obj)>() << std::endl;
    std::cout << typeid(obj).name() << std::endl;

    std::vector<int> vec;
    std::cout << "vec: " << dataType<decltype(vec)>() << std::endl;
    std::cout << typeid(vec).name() << std::endl;

    float f = 3.14f;
    std::cout << "f: " << dataType<decltype(f)>() << std::endl;
    std::cout << typeid(f).name() << std::endl;

    return 0;
}
