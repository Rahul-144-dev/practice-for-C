// print a number, its square and cube, starting with 1 and printing n lines.
// Accept the number of lines (n, integer) from the user
#include <stdio.h>
#include <math.h>
int sq(int a);
int qube(int a);
int main()
{
   int nol;
   printf("enter number : ");
   scanf("%d", &nol);
   int num = 1;
   for (int i = 1; i <= nol; i++)
   {
      printf("%d ", num);
      printf("%d ", sq(num));
      printf("%d ", qube(num));
      num++;
      printf("\n");
   }
   return 0;
}
int sq(int a)
{
   return (a * a);
}
int qube(int a)
{
   return (a * a * a);
}