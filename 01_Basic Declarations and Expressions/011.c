// Write a C program that accepts two item's weight and number of purchases (floating point values) and
// calculates their average value.
#include <stdio.h>
#include <math.h>
int main()
{
    float weight[3], count[3];
    printf("enter weight : ");
    scanf("%f", &weight[1]);
    printf("enter no of items : ");
    scanf("%f", &count[1]);
    printf("enter weight : ");
    scanf("%f", &weight[2]);
    printf("enter no of items : ");
    scanf("%f", &count[2]);
    double avg_value = (weight[1] * count[1] + weight[2] * count[2]) / (count[1] + count[2]);
    printf("average value : %.2lf", avg_value);
    return 0;
}