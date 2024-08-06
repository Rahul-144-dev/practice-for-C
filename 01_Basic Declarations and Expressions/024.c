//* Write a C program that reads two integers and checks whether they are multiplied or not
#include <stdio.h>
#include <math.h>
int main()
{
   int a, b, div;
   printf("enter number : ");
   scanf("%d", &a);
   printf("enter number : ");
   scanf("%d", &b);
   if (a % b == 0)
   {
      div = a / b;
      printf("%d is multiplier of %d*%d", a, b, div);
   }
   else if (b % a == 0)
   {
      div = b / a;
      printf("%d is multiplier of %d*%d", b, a, div);
   }
   return 0;
}