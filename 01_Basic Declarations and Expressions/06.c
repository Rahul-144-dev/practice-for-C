// Write a C program to compute the perimeter and area of a circle with a given radius
#include <stdio.h>
#include <math.h>
int main()
{
    double radius, pi = 3.14;
    printf("enter radius : ");
    scanf("%lf", &radius);
    double circumference = 2 * pi * radius;
    double area = pi * radius * radius;
    printf("Area of the Circle = %lf inches\n", area);
    printf("Perimeter of the Circle = %lf square inches\n", circumference);
    return 0;
}