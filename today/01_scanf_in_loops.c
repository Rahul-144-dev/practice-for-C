#include <stdio.h>
#include <math.h>
int main()
{
   int a, b, c, d;
   for (int i = 0; i < 4; i++)
   {
      printf("enter interger %c : ", i + 97);
      if (i == 0)
         scanf("%d", &a);
      else if (i == 1)
         scanf("%d", &b);
      else if (i == 2)
         scanf("%d", &c);
      else if (i == 3)
         scanf("%d", &d);
   }
   printf("a=%d\n", a);
   printf("b=%d\n", b);
   printf("c=%d\n", c);
   printf("d=%d\n", d);
   return 0;
}