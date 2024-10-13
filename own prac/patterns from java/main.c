#include <stdio.h>
void pattern_31(int n);
int min(int a, int b);
int main()
{
  pattern_31(4);
  return 0;
}
int min(int a, int b)
{
  return (a < b) ? a : b;
}
void pattern_31(int n)
{
  n = 2 * n;
  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= n; col++)
    {
      int atEveryIndex = min(min(row, col), min(n - row, n - col));
      printf("%d ", atEveryIndex);
    }
    printf("\n");
  }
}
void pattern_17(int n)
{
  for (int row = 1; row <= 2 * n - 1; row++)
  {
    int c = (row > n) ? 2 * n - row : row;

    for (int spaces = 1; spaces <= n - c; spaces++)
    {
      printf("  ");
    }
    for (int col = c; col >= 1; col--)
    {
      printf("%d ", col);
    }
    for (int col = 2; col <= c; col++)
    {
      printf("%d ", col);
    }
    printf("\n");
  }
}
void pattern_30(int n)
{
  for (int row = 1; row <= n; row++)
  {
    for (int spaces = 1; spaces <= n - row; spaces++)
    {
      printf("  ");
    }
    for (int col = row; col >= 1; col--)
    {
      printf("%d ", col);
    }
    for (int col = 2; col <= row; col++)
    {
      printf("%d ", col);
    }
    printf("\n");
  }
}
void pattern_28(int n)
{
  printf("pattern_5\n");
  for (int row = 1; row <= 2 * n - 1; row++)
  {
    int column_in_row = (row > n) ? 2 * n - row : row;
    int no_spaces = n - column_in_row;
    for (int s = 1; s <= no_spaces; s++)
    {
      printf("-");
    }
    for (int col = 1; col <= column_in_row; col++)
    {
      printf("* ");
    }
    printf("\n");
  }
}
void pattern_5(int n)
{
  printf("pattern_5\n");
  for (int row = 1; row <= 2 * n - 1; row++)
  {
    int column_in_row = (row > n) ? 2 * n - row : row;
    for (int col = 1; col <= column_in_row; col++)
    {
      printf("* ");
    }
    printf("\n");
  }
}
void pattern_4(int n)
{
  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= row; col++)
    {
      printf("%d ", col);
    }
    printf("\n");
  }
}
void pattern_3(int n)
{
  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= n + 1 - row; col++)
    {
      printf("* ");
    }
    printf("\n");
  }
}
void pattern_2(int n)
{
  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= row; col++)
    {
      printf("* ");
    }
    printf("\n");
  }
}
void pattern_1(int n)
{
  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= n; col++)
    {
      printf("* ");
    }
    printf("\n");
  }
}