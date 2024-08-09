//* Write a C program to find and print the square of all the even values from 1 to a specified value
#include <stdio.h>
#include <math.h>
int main()
{
   int n;
   printf("enter number : ");
   scanf("%d", &n);
   for (int i = 1; i <= n; i++)
   {
      if (i % 2 == 0)
      {
         int power = pow(i, 2);
         printf("the square of %d is %d\n", i, power);
      }
   }
   return 0;
}