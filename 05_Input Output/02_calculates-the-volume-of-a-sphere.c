#include <stdio.h>
#include <math.h>
int main()
{
    double r, pi = 3.14;
    printf("enter the radius of the sphere : ");
    scanf("%lf", &r);
    double v = 4.0 / 3.0 * pi * pow(r, 3); /// I have to use decimal values to get exact output
    printf("if the radius is : %.2lf then the volume of a sphere is : %lf", r, v);
    return 0;
}