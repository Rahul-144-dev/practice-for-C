//. convert a given integer (in days) to years, months and days, assuming that all months have 30 days
//* and all years have 365 days
#include <stdio.h>
#include <math.h>
int main()
{
    int input_days;
    printf("enter number : ");
    scanf("%d", &input_days);
    int years = input_days / 365;
    int months = input_days % 365 / 30;
    int days = input_days % 365 % 30;
    printf("years : %d\n", years);
    printf("months : %d\n", months);
    printf("days : %d", days);
    return 0;
}