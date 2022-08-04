#include <type_traits>
#include <typeinfo>
#ifndef _MSC_VER
#   include <cxxabi.h>
#endif
#include <memory>
#include <string>
#include <cstdlib>

template <class T>
std::string GetTypeName()
{
    typedef typename std::remove_reference<T>::type TR;
    std::unique_ptr<char, void(*)(void*)> own
    (
#ifndef _MSC_VER
        abi::__cxa_demangle(typeid(TR).name(), nullptr, nullptr, nullptr),
#else
        nullptr,
#endif
        std::free
    );
    std::string result = own != nullptr ? own.get() : typeid(TR).name();
    if (std::is_const<TR>::value) {
        result += " const";
    }
    if (std::is_volatile<TR>::value) {
        result += " volatile";
    }
    if (std::is_lvalue_reference<T>::value) {
        result += "&";
    }
    else if (std::is_rvalue_reference<T>::value) {
        result += "&&";
    }

    return result;
}