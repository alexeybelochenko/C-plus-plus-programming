/*Реализуйте функцию swap_min, которая принимает на вход двумерный массив целых чисел, ищет в этом массиве строку, содержащую наименьшее среди всех элементов массива значение, и меняет эту строку местами с первой строкой массива.*/
void swap_min(int *m[], unsigned rows, unsigned cols)
{
  int minNumber = 0;
  int min = m[0][0];
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      if (min > m[i][j]){
        minNumber = i;
        min = m[i][j];
      }
    }
  }

  int *temp = m[minNumber];
  m[minNumber] = m[0];
  m[0] = temp;
}