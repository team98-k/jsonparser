#pragma once

#include <string>

template <class T>
std::string GetTypeName();

template <class T, class S>
struct is_string;

template <class T, class Traits, class Alloc>
struct is_string<T, std::basic_string<T, Traits, Alloc>>;

#include "DataType.hpp"