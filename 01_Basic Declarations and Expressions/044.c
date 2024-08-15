//| calculate the average mathematics marks of some students.
//* Input 0 (excluding to calculate the average) or a negative value to terminate the input process.
#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{
   int marks[99];
   float nos = 0, total = 0;
   for (int i = 0;; i++)
   {
      printf("Input Mathematics marks (0 to terminate): ");
      scanf("%d", &marks[i]);
      if (marks[i] == 0)
         break;
      nos++;
      total += marks[i];
   }
   float avg = total / nos;
   printf("Average = %.2f", avg);
   return 0;
}