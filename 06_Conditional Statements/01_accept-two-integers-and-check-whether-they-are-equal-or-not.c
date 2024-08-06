// Write a C program to accept two integers and check whether they are equal or not
#include <stdio.h>
#include <math.h>
int main()
{
    int n1, n2;
    printf("enter number : ");
    scanf("%d", &n1);
    printf("enter number : ");
    scanf("%d", &n2);
    if (n1 == n2)
        printf("number 1 & number 2 are equal");
    else
        printf("number 1 & number 2 are not equal");
    return 0;
}