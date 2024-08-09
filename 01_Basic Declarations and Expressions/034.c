//* Write a C program to compute the sum of consecutive odd numbers from a given pair of integers
#include <stdio.h>
#include <math.h>
int main()
{
   int a, b, sum = 0;
   printf("\nInput a pair of numbers (for example 10,2)\n");
   printf("enter number a : ");
   scanf("%d", &a);
   printf("enter number b : ");
   scanf("%d", &b);
   // if (a < b)
   //    return 0;
   printf("the odd numbers are ");
   for (int i = a; i <= b; i++)
   {
      if (i % 2 != 0)
      {
         printf("%d ", i);
         sum += i;
      }
   }
   printf("\nthe sum of the odd numbers %d", sum);
   return 0;
}