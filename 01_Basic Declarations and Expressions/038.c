// reads two numbers and divides the first number by the second number.
// If division is not possible print "Division is not possible"
#include <stdio.h>
#include <math.h>
int main()
{
   int a, b;
   printf("enter number : ");
   scanf("%d", &a);
   printf("enter number : ");
   scanf("%d", &b);
   if (a == 0 || b == 0)
      printf("0=0");
   if (a % b == 0)
      printf("%d", a / b);
   else
      printf("division is not possible");
   return 0;
}