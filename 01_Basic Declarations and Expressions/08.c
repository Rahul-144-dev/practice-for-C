//: Write a C program to convert specified days into years, weeks and days
//* Note: Ignore leap year
#include <stdio.h>
#include <math.h>
int main()
{
    int days;
    printf("Number of days : ");
    scanf("%d", &days);
    int years = days / 365;
    int weeks = ((days % 365) / 7);
    int day = ((days % 365) / 7) % 30;
    printf("years = %d\n", years);
    printf("weeks = %d\n", weeks);
    printf("day = %d\n", day);
    return 0;
}