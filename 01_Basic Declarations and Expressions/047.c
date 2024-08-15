//* Write a C program that finds all the divisors of an integer
#include <stdio.h>
#include <math.h>
int main()
{
   int n;
   printf("Input an integer : ");
   scanf("%d", &n);
   printf("All the divisor of %d are : ", n);
   for (int i = 1; i <= n; i++)
   {
      if (n % i == 0)
         printf("%d ", i);
   }
   return 0;
}