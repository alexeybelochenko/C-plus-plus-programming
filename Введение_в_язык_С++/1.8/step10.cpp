/*Простая задача на закрепления материала по работе с  вводом/выводом. Напишите программу, которая суммирует целые числа.*/
#include <iostream>
int main()
{
    int n,a,b;
    std::cin >> n;
 
    while(n-- && std::cin >> a >> b)
        std::cout << a + b << std::endl;
    
    return 0;    
}