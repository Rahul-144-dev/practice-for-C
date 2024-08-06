//: Write a C program to convert specified days into years, months and days
//| Note: Ignore leap year
#include <stdio.h>
#include <math.h>
int main()
{
    int days;
    printf("enter number : ");
    scanf("%d", &days);
    int years = days / 365;
    int months = (days % 365) / 30;
    int weeks = ((days % 365) / 30) / 7;
    int day = (((days % 365) / 30) / 7) % 30;
    printf("years = %d\n", years);
    printf("months = %d\n", months);
    printf("weeks = %d\n", weeks);
    printf("day = %d\n", day);
    return 0;
}