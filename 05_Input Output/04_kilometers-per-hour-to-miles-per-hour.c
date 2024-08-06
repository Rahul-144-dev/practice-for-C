#include <stdio.h>
#include <math.h>
/// Speed (mph)=Speed (km/h)×0.621371
int main()
{
    double n, m = 0.621371;
    printf("enter number : ");
    scanf("%lf", &n);
    double mph = n * m;
    printf("the km/h->%.2lf is mph->%.4lf", n, mph);
    return 0;
}