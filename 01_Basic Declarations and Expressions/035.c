//* check if two numbers in a pair are in ascending order or descending order
#include <stdio.h>
#include <math.h>
int main()
{
   int a, b;
   printf("enter number a : ");
   scanf("%d", &a);
   printf("enter number b : ");
   scanf("%d", &b);
   if (a > b)
      printf("The pair is in descending order!");
   else
      printf("The pair is in ascending order");
   return 0;
}