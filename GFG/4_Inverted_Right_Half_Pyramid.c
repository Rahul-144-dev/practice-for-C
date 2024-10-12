#include <stdio.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    int x = 1;
    for (int j = 1; j <= n + 1 - i; j++)
    {
      printf("%c ", x + 64);
      x++;
    }
    printf("\n");
  }
  return 0;
}