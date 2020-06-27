#include <cstddef> // size_t
#include <iostream>
using namespace std;
template <typename A, size_t size>
size_t array_size(A (&array)[size]) {
    return size;
}