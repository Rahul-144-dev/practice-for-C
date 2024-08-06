//. Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points)
#include <stdio.h>
#include <math.h>
int main()
{
	int distance[1];
	float fuel[1];
	printf("total distance in km : ");
	scanf("%d", &distance[0]);
	printf("total fuel spent in liters : ");
	scanf("%f", &fuel[0]);
	printf("average fuel consumption : %f", distance[0] / fuel[0]);
	return 0;
}