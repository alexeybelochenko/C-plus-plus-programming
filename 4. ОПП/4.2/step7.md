В программе определены две функции:
<float  square(float value) { return value * value; }
double square(float value) { return (double)value * value; }>

Далее в программе есть вызов:
<double sq = square(2.0);>

**Ответ:**

* программа не скомпилируется, потому что такая перегрузка функции square не допустима