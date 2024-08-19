//. enter first element of the array : 2
// arr[0] = 2
// arr[1] = 6
// arr[2] = 18
// arr[3] = 54
// arr[4] = 162
#include <stdio.h>
#include <math.h>
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  int arr[5];
  for (int i = 0; i <= 4; i++)
  {
    arr[i] = n;
    printf("arr[%d] = %d\n", i, n);
    n *= 3;
  }
  return 0;
}