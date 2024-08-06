//* Write a C program that reads an integer between 1 and 12 and prints the month of the year in English
#include <stdio.h>
#include <math.h>
int main()
{
   int month_no;
   do
   {
      printf("enter month number : ");
      scanf("%d", &month_no);
      switch (month_no)
      {
      case 1:
         printf("january\n");
         break;
      case 2:
         printf("february\n");
         break;
      case 3:
         printf("march\n");
         break;
      case 4:
         printf("april\n");
         break;
      case 5:
         printf("may\n");
         break;
      case 6:
         printf("june\n");
         break;
      case 7:
         printf("july\n");
         break;
      case 8:
         printf("august\n");
         break;
      case 9:
         printf("september\n");
         break;
      case 10:
         printf("october\n");
         break;
      case 11:
         printf("november\n");
         break;
      case 12:
         printf("december\n");
         break;
      }
      if (month_no < 1 || month_no > 12)
         printf("entered a vaild number 1-12");
   } while (month_no < 1 || month_no > 12);
   return 0;
}
