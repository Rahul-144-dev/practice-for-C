// C Program to print diamond pattern using numbers
#include <stdio.h>
int main()
{
  int n = 5;
  // printf("enter number : ");
  // scanf("%d", &n);
  // first outer loop to iterate through each row
  for (int i = 0; i < 2 * n - 1; i++)
  {
    // assigning values to the comparator according to the row number
    int comp;
    if (i < n)
      comp = 2 * (n - i) - 1;
    else
      comp = 2 * (i - n + 1) + 1;
    // first inner loop to print leading whitespaces
    for (int j = 0; j < comp; j++)
    {
      printf("-", j);
    }
    // second inner loop to print number
    for (int k = 0; k < 2 * n - comp; k++)
    {
      printf("%d ", k + 1);
    }
    printf("\n");
  }
  return 0;
}
