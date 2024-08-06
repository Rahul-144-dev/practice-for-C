// Write a C program that accepts two integers from the user and calculates the product of the two integers
#include <stdio.h>
#include <math.h>
int main()
{
    int n[2];
    printf("enter number : ");
    scanf("%d", &n[0]);
    printf("enter number : ");
    scanf("%d", &n[1]);
    printf("product of two integers : %d", n[0] * n[1]);
    return 0;
}