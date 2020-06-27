#include <cstddef> // size_t
#include <string>

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();

    String(const String &other);
    String &operator=(const String &other);

	void append(const String &other);
    
    struct StrSlice {
        StrSlice(size_t i, char *str) : shift(i), str(str) { }
        
        String operator[](size_t j) {
            std::string tmp(str);
            return String(tmp.substr(shift, j - shift).c_str());
        }
        
        private:
            size_t shift;
            char *str;
    };
    
    StrSlice operator[](size_t i) const {
        return StrSlice(i, str);
    }

	size_t size;
	char *str;
};