//. integers p, q, r, s from the user where q, r and s are positive and p is even.
//| If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q
//* print "Correct values", otherwise print "Wrong values"
#include <stdio.h>
#include <math.h>
int main()
{
   int p, q, r, s;
   for (int i = 0; i <= 3; i++)
   {
      printf("enter integers %c:", i + 112);
      scanf("%d", &p+1);
   }
   // scanf("%d%d%d%d", &p, &q, &r, &s);
   if ((q > r) && (s > p) && (r + s) > (p + q) && (p % 2 == 0))
      printf("current value");
   else
      printf("wrong value");
   return 0;
}