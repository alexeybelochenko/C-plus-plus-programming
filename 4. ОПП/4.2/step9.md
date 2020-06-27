В программе есть следующие определения:
<void promotion(char &) { std::cout << "char" << std::endl; }
void promotion(int  &) { std::cout << "int"  << std::endl; }
void promotion(long &) { std::cout << "long" << std::endl; }>
Кроме того в программе есть вызов:
<short sh = 10;
promotion(sh);>

**Ответ:**
* вызов promotion(sh) не скомпилируется, так как нет ни одной подходящей функции для вызова