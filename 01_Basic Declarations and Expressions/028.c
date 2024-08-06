//. Write a C program that reads 5 numbers, counts the number of positive numbers
//* and prints out the average of all positive values
#include <stdio.h>
#include <math.h>
int main()
{
   int num[5], p_count = 0, sum = 0;
   for (int i = 0; i < 5; i++)
   {
      printf("enter number %d : ", i + 1);
      scanf("%d", &num[i]);
   }
   for (int i = 0; i < 5; i++)
   {
      if (num[i] >= 0)
      {
         sum += num[i];
         p_count++;
      }
   }
   printf("the average of all positive values %d", sum / p_count);
   return 0;
}