// C program that reads two integers p and q, prints p number of lines in a sequence of 1 to b in a line
#include <stdio.h>
#include <math.h>
int main()
{
   int nol, noc;
   printf("number of lines : ");
   scanf("%d", &nol);
   printf("Number of characters in a line: ");
   scanf("%d", &noc);
   int ch = 1;
   for (int i = 1; i <= nol; i++)
   {
      for (int j = 1; j <= noc; j++)
      {
         printf("%d ", ch);
         ch++;
      }
      printf("\n");
   }
   return 0;
}