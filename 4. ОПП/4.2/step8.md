На предыдущей неделе вы реализовали класс String. Добавим в него два метода:
<struct String {
    /* ... */
    char & at(size_t idx)       { return str[idx]; }
    char   at(size_t idx) const { return str[idx]; }
    /* ... */
    size_t size;
    char *str;
};>
Кроме того есть два фрагмента кода:
<String greet("Hello");
char ch1 = greet.at(0);>
и 
<String const const_greet("Hello, Const!";
char const &ch2 = const_greet.at(0);>

**Ответы:**

* в char ch1 = greet.at(0) будет вызвана не const версия метода at
* в char const & ch2 = const_greet.at(0) будет вызвана const версия метода at