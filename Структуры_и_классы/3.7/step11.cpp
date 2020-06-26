#include <algorithm> // std::swap
#include <cstddef>   // size_t
#include <cstring>   // strlen, strcpy
 
struct String {
    String(const char *str = "");
    String(size_t n, char c);
    String(const String &other);
    ~String();
   
    String &operator=(String other);
 
 
    void append(const String &other);
 
    size_t size;
    char *str;
};
 
String & String::operator=(String other) {
    if(other.size == size)
        for(size_t i = 0; i <= size; ++i)
            this->str[i] = other.str[i];
    else {
        size = other.size;
        char * temp = new char[size + 1];
        for(size_t i = 0; i <= size; ++i)
            temp[i] = other.str[i];
        delete[] str;
        str = temp;     
    }
 
    return *this;
}