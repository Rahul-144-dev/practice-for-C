// Write a C program to check whether a given number is positive or negative
#include <stdio.h>
#include <math.h>
void main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    if (n >= 0)
        printf("positive");
    else
        printf("negative");
    return;
}