/// takes-hours-and-minutes-as-input-and-calculates-the-total-number-of-minutes
#include <stdio.h>
#include <math.h>
int main()
{
    double hours, minutes;
    printf("enter hours : ");
    scanf("%lf", &hours);
    printf("enter minutes : ");
    scanf("%lf", &minutes);
    double total_minutes = (hours * 60 + minutes);
    printf("the total minutes are %.0lf", total_minutes);
    return 0;
}