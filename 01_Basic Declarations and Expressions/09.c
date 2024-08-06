// Write a C program that accepts two integers from the user and calculates the sum of the two integers
#include <stdio.h>
#include <math.h>
int main()
{
    int num[2];
    printf("enter number 1 : ");
    scanf("%d", &num[0]);
    printf("enter number 2 : ");
    scanf("%d", &num[1]);
    printf("sum of the two integers %d", num[0] + num[1]);
    return 0;
}