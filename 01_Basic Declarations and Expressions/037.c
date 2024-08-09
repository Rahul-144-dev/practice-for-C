// read the coordinates (x, y) (in the Cartesian system)
#include <stdio.h>
#include <math.h>
int main()
{
   int x, y;
   for (int i = 0; i < 1;)
   {
      printf("enter number x : ");
      scanf("%d", &x);
      printf("enter number y : ");
      scanf("%d", &y);
      if (x > 0 && y > 0)
         printf("Quadrant-I(+,+)\n");
      else if (x > 0 && y < 0)
         printf("Quadrant-II(+,-)\n");
      else if (x < 0 && y < 0)
         printf("Quadrant-III(-,-)\n");
      else if (x < 0 && y > 0)
         printf("Quadrant-IV(-,+)\n");
   }
   return 0;
}