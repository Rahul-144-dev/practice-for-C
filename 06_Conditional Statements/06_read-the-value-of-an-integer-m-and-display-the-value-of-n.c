// Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0,
// 0 when m is 0 and -1 when m is less than 0
#include <stdio.h>
#include <math.h>
int main()
{
    int m, n = 1;
    printf("enter number : ");
    scanf("%d", &m);
    if (m > 0)
        printf("the value of N = %d\n", n);
    else if (m == 0)
        printf("the value of N = %d\n", --n);
    else if (m < 0)
        printf("the value of N = %d\n", n - 2);
    return 0;
}