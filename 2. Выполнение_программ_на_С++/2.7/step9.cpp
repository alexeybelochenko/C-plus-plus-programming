/*Напишите функцию, которая принимает на вход целочисленную матрицу MM (другими словами, просто двумерный целочисленный массив) размера rows \times colsrows×cols, и возвращает транспонированную матрицу M^TM T (тоже двумерный целочисленный массив) размера cols \times rowscols×rows. Если в MM на пересечении ii-ой строки и jj-ого столбца стояло число xx, то на пересечении  jj-ой строки и ii-ого столбца в матрице M^TM 
T тоже будет стоять число xx, или другими словами M^T[j][i] = M[i][j]M T [j][i]=M[i][j].*/
int **transpose(const int *const *m, unsigned rows, unsigned cols)
{
  int **matrix = new int *[cols];
  matrix[0] = new int[rows * cols];
  for (int i = 1; i < cols; ++i)
  {
    matrix[i] = matrix[i - 1] + rows;
  }

  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      matrix[j][i] = m[i][j];
    }
  }
  return matrix;
}