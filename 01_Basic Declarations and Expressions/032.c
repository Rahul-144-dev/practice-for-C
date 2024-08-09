// Write a C program to print all numbers between 1 and 100 which are divided by a specified number and
// the remainder will be 3
#include <stdio.h>
#include <math.h>
int main()
{
   int n;
   printf("enter number : ");
   scanf("%d", &n);
   for (int i = 0; i <= 100; i++)
   {
      if (i % n == 3)
         printf("%d ", i);
   }
   return 0;
}
