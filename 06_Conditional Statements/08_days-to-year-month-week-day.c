// Write a C program to convert specified days into years, weeks and days.
// Note : Ignore leap year
#include <stdio.h>
#include <math.h>
int main()
{
    int days;
    printf("enter number : ");
    scanf("%d", &days);
    int years, months, weeks, day;
    years = days / 365;
    months = (days % 365) / 30;
    weeks = (days % 365) / 7;
    day = days - ((years * 365) + (months * 30) + (weeks * 7));
    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);
    return 0;
}