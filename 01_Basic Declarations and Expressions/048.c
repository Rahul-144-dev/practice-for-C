// reads and prints the elements of an array of length 7.
// Before printing, replace every negative number & zero, with 100
#include <stdio.h>
#include <math.h>
int main()
{
   int n;
   printf("enter length of array : ");
   scanf("%d", &n);
   int arr[n];
   int i = 0, j = 0;
   for (int i = 0; i < n; i++)
   {
      printf("enter number %d : ", i + 1);
      scanf("%d", &arr[i]);
   }
   for (int i = 0; i < n; i++)
   {
      if (arr[i] <= 0)
         arr[i] = 100;
      printf("arr[%d] = %d\n", i, arr[i]);
   }
   return 0;
}