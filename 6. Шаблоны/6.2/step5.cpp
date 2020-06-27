#include <cstddef>
template <typename T, typename U>
void copy_n(T * dest, U * source, size_t size){
    for (size_t i=0; i != size; ++i){
        dest[i] = (T) source[i];
    }
}
