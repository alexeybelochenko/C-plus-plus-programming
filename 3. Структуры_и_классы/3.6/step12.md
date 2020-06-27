До сих пор мы не уделяли внимание константности методов. Пусть теперь класс String выглядит следующим образом:
<struct String {
    String(const char *str = "");            /* 1 */
    String(size_t n,  char c);               /* 2 */
    ~String();                               /* 3 */
    void append(const String &other);        /* 4 */
    size_t length();                         /* 5 */
    char &get(size_t pos);                   /* 6 */
    bool equal(const String &other);         /* 7 */
private:
    size_t size;
    char *str;
};>


**Ответы:**
* size_t length()
* bool equal(const String &other)