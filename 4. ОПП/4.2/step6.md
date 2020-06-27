Есть три версии функции foo:
<void foo(char) { std::cout << "char" << std::endl; }
void foo(signed char) { std::cout << "signed char" << std::endl; }
void foo(unsigned char) { std::cout << "unsigned char" << std::endl; }>

**Ответы:**

* вызов foo(97) приведет к ошибке компиляции

* в результате вызова foo('a') будет выведено char