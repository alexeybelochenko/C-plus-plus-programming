/*Реализованные в предыдущих заданиях конструкторы и деструктор берут на себя работу по управлению ресурсами. Теперь можно дополнить структуру String различными полезными методами.

Для работы со строками можно придумать множество полезных методов (подумайте, какие методы пригодились бы вам, и чего вам не хватает для их реализации). Примером такого метода может послужить метод append — он добавляет копию строки-аргумента в конец текущей строки (т.е. в конец строки, у которой он был вызван).*/
#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();
	void append(String &other);
	size_t size;
	char *str;
};

void String::append(String &other) {
    size += other.size;
    char* n_str = strcat(strcat(new char[size+1], str), other.str);
    delete[] str;
    str = n_str;
}