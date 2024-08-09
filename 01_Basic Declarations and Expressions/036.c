// read a password until it is valid. For wrong password print "Incorrect password"
// and for correct password print, "Correct password" and quit the program. The correct password is 1234
#include <stdio.h>
#include <math.h>
int main()
{
   int n, x = 2;
   while (x != 0)
   {
      printf("enter number : ");
      scanf("%d", &n);
      if (n == 144)
      {
         printf("correct password");
         break;
      }
      else
         printf("wrong password\n");
   }
   return 0;
}