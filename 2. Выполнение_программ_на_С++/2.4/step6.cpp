/*Очень часто для работы со строками нам нужно сначала вычислить длину строки. Для C-style строк длина нигде явно не хранится, но её можно вычислить. Напишите функцию, которая вычисляет длину C-style строки. Учтите, что завершающий нулевой символ считать не нужно.*/
unsigned strlen(const char *str)
{
    unsigned cnt = 0;
    while(*(str + cnt) != 0) ++cnt;
 
    return cnt;
}