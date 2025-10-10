#ifndef DATA_TYPE_HPP
#define DATA_TYPE_HPP

#include <string>
#include <typeinfo>
#include <type_traits>

namespace datatype {

    // ========== Primary Template ==========
    template <typename T>
    std::string dataType() {
        if constexpr (std::is_class<T>::value) {
            return std::string("class: ") + typeid(T).name();
        } else {
            return typeid(T).name();  // Fallback for non-class types
        }
    }

    // ========== Specializations for Built-in Types ==========

    // Integers
    template <> std::string dataType<short>()              { return "short"; }
    template <> std::string dataType<unsigned short>()     { return "unsigned short"; }

    template <> std::string dataType<int>()                { return "int"; }
    template <> std::string dataType<unsigned int>()       { return "unsigned int"; }

    template <> std::string dataType<long>()               { return "long"; }
    template <> std::string dataType<unsigned long>()      { return "unsigned long"; }

    template <> std::string dataType<long long>()          { return "long long"; }
    template <> std::string dataType<unsigned long long>() { return "unsigned long long"; }

    // Floating points
    template <> std::string dataType<float>()              { return "float"; }
    template <> std::string dataType<double>()             { return "double"; }
    template <> std::string dataType<long double>()        { return "long double"; }

    // Characters and booleans
    template <> std::string dataType<char>()               { return "char"; }
    template <> std::string dataType<signed char>()        { return "signed char"; }
    template <> std::string dataType<unsigned char>()      { return "unsigned char"; }

    template <> std::string dataType<bool>()               { return "bool"; }

    // Strings
    template <> std::string dataType<std::string>()        { return "std::string"; }

} // namespace datatype

#endif // DATA_TYPE_HPP

