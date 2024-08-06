//* Write a C program that prints all even numbers between 1 and 50 (inclusive)
#include <stdio.h>
#include <math.h>
int main()
{
   int n, i = 1;
   printf("enter number : ");
   scanf("%d", &n);
   while (i <= n)
   {
      if (i % 2 == 0)
         printf("%d ", i);
      i++;
   }
   return 0;
}