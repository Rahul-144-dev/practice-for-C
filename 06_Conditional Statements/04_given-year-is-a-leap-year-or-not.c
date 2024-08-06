// Write a C program to find whether a given year is a leap year or not
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number -> ");
    scanf("%d", &n);
    if ((n % 4 == 0 & n % 100 != 0) || n % 400 == 0)
        printf("leap year  ");
    else
        printf(" not leap year  ");
    return 0;
}