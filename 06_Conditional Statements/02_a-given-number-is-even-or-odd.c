// Write a C program to check whether a given number is even or odd
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    if (n % 2)
        printf("%d is an odd integer", n);
    else
        printf("%d is an even integer", n);
    return 0;
}