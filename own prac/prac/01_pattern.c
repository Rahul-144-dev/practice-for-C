#include <stdio.h>
int main()
{
  int n = 5;
  // printf("enter number : ");
  // scanf("%d", &n);
  int nst = 1;
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    for (int j = 1; j <= nst; j++)
    {
      printf("* ");
    }
    if (i < n)
      nst++;
    else
      nst--;
    printf("\n");
  }
  return 0;
}