//* Write a C program that reads 5 numbers and sums all odd values between them
#include <stdio.h>
#include <math.h>
int main()
{
    int num[5], sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        printf("enter number %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        if (num[i] % 2 != 0)
            sum += num[i];
    }
    printf("sum = %d\n", sum);
    return 0;
}