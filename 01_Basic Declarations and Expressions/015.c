//.Write a C program to calculate the distance between two points.
//* Note : x1, y1, x2, y2 are all double values.
#include <stdio.h>
#include <math.h>
int main()
{
	double x[2], y[2];
	printf("enter x1 : ");
	scanf("%lf", &x[0]);
	printf("enter y1 : ");
	scanf("%lf", &y[0]);
	printf("enter x2 : ");
	scanf("%lf", &x[1]);
	printf("enter y2 : ");
	scanf("%lf", &y[1]);
	double distance = ((x[1] - x[0]) * (x[1] - x[0])) + ((y[1] - y[0]) * (y[1] - y[0]));
	printf("Distance between the said points: %.4lf", sqrt(distance));
	return 0;
}
