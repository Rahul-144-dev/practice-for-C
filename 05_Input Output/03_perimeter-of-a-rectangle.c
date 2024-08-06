// the perimeter of a rectangle using its height and width
/// Perimeter = 2×(Width + Height)
#include <stdio.h>
#include <math.h>
int main()
{
    double height, width;
    printf("enter height : ");
    scanf("%lf", &height);
    printf("enter width : ");
    scanf("%lf", &width);
    double perimeter = 2 * (height + width);
    printf("if height %.2lf and width %.2lf\nthe perimeter of a rectangle is %.3lf", height, width, perimeter);
    return 0;
}