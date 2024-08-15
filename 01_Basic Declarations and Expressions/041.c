// print 3 numbers on a line, starting with 1 and printing nol lines.
// Accept the number of lines (n, integer) from the user
#include <stdio.h>
#include <math.h>
int main()
{
   int nol, nst = 3, x = 1;
   printf("enter number : ");
   scanf("%d", &nol);
   for (int i = 0; i < nol; i++)
   {
      for (int j = 0; j < nst; j++)
      {
         printf("%d ", x);
         x++;
      }
      printf("\n");
   }
   return 0;
}