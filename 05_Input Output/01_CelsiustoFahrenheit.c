#include <stdio.h>
#include <math.h>
int main()
{
    double c;
    printf("enter celsius(centigrade) : ");
    scanf("%lf", &c);
    double f = (c * 9 / 5) + 32;
    printf("the celsius %.2lf is %.3lf fahrenheit", c, f);
    return 0;
}