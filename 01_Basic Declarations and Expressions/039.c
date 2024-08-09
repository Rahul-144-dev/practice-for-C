// calculate the sum of all numbers not divisible by 17 between two given integer numbers
#include <stdio.h>
#include <math.h>
int main()
{
   int r1, r2, sum = 0;
   printf("enter number r1 : ");
   scanf("%d", &r1);
   printf("enter number r2 : ");
   scanf("%d", &r2);
   for (int i = r1; i <= r2; i++)
   {
      if (i % 17 != 0)
         sum += i;
   }
   printf("sum : %d", sum);
   return 0;
}