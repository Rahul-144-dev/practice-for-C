// C program that accepts some integers from the user and finds the highest value and the input position
#include <stdio.h>
#include <math.h>
int main()
{
   int n;
   printf("enter number of array : ");
   scanf("%d", &n);
   int arr[n];
   int max = arr[0];
   int pos;
   for (int i = 0; i < n; i++)
   {
      printf("enter numbrer %d : ", i + 1);
      scanf("%d", &arr[i]);
   }
   for (int i = 0; i < n; i++)
   {
      if (max < arr[i])
      {
         max = arr[i];
         pos = i;
      }
   }
   printf("MAX = %d ", max);
   printf("position = %d\n", pos + 1);
   return 0;
}