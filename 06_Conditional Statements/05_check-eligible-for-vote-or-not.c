// Write a C program to read the age of a candidate and determine whether he is eligible
// to cast his/her own vote
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    if (n >= 18)
        printf("eligible to vote");
    else
        printf("uneligible to vote");
    return 0;
}