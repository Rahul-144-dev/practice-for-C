//* Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers
#include <stdio.h>
#include <math.h>
int main()
{
   int num[5], p_count = 0, n_count = 0;
   for (int i = 0; i < 5; i++)
   {
      printf("enter number %d: ", i + 1);
      scanf("%d", &num[i]);
   }
   for (int i = 0; i < 5; i++)
   {
      if (num[i] >= 0)
         p_count++;
      else
         n_count++;
   }
   printf("Number of positive numbers: %d\n", p_count);
   printf("Number of negative numbers: %d", n_count);
   return 0;
}