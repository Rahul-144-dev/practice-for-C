// finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers
#include <stdio.h>
#include <math.h>
int main()
{
   int r1, r2, sum = 0;
   printf("enter number r1 : ");
   scanf("%d", &r1);
   printf("enter number r2 : ");
   scanf("%d", &r2);
   for (int i = r1; i < r2; i++)
   {
      if (i % 7 == 2 || i % 7 == 3)
         printf("%d\n", i);
   }
   return 0;
}