#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i - 1; j++)
    {
      printf("- ");
    }
    for (int k = 1; k <= 2 * n - (2 * i - 1); k++)
    {
      printf("%d ", k);
    }
    printf("\n");
  }
  return 0;
}