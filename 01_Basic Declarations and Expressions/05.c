// Write a C program to compute the perimeter and area of a rectangle with
// a height of 7 inches and width of 5 inches
#include <stdio.h>
#include <math.h>
int main()
{
    int height, width;
    printf("enter height : ");
    scanf("%d", &height);
    printf("enter width : ");
    scanf("%d", &width);
    int perimeter = 2 * (height + width);
    int area = (height * width);
    printf("Perimeter of the rectangle = %d\n", perimeter);
    printf("Area of the rectangle =  %d", area);
    return 0;
}