//. check whether a given integer is positive even, negative even, positive odd or negative odd.
//* Print even if the number is 0
#include <stdio.h>
#include <math.h>
int main()
{
   int n;
   printf("enter a number : ");
   scanf("%d", &n);
   if (n >= 0)
      printf("number is positive ");
   else
      printf("number is negative ");
   if (n % 2 == 0)
      printf("even");
   else
      printf("odd");
   return 0;
}