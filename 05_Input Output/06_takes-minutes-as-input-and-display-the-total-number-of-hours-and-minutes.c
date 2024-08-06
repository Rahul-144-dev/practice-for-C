/// takes-minutes-as-input-and-display-the-total-number-of-hours-and-minutes
#include <stdio.h>
#include <math.h>
int main()
{
    double minutes;
    int hours;
    printf("enter minutes : ");
    scanf("%lf", &minutes);
    hours = minutes / 60;        // because of division the integer value prints remains out
    minutes = (int)minutes % 60; // because of modulo the reminder value prints
    printf("hours-%d\n", hours);
    printf("minutes-%0.lf\n", minutes);
    return 0;
}