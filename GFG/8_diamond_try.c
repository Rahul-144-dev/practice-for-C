#include <stdio.h>
int main()
{
  int n = 5;
  // printf("enter number : ");
  // scanf("%d", &n);
  int x = 1;
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int comp;
    if (i < n)
      comp = n - i;
    else
      comp = i - n;
    int a = comp;
    for (int j = 1; j <= comp; j++)
    {
      printf("- ");
    }
    for (int k = 1; k <= x; k++)
    {
      printf("%d ", k);
    }
    if (i < n)
      x += 2;
    else
      x -= 2;
    printf("\n");
  }
  return 0;
}
