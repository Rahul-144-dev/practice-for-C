//. reads three floating - point values and checks if it is possible to make a triangle with them.Determine the
//* perimeter of the triangle if the given values are valid
#include <stdio.h>
#include <math.h>
int main()
{
	float points[3];
	for (int i = 0; i <= 2; i++)
	{
		printf("enter side %d : ", i + 1);
		scanf("%f", &points[i]);
	}
	if ((points[0] + points[1]) > points[2] && (points[1] + points[2]) > points[0] && (points[0] + points[2]) > points[1])
		// if (points[0] + points[1] + points[2] == 180)
			printf("it is possible to make a triangle with them");
		else
			printf("it is impossible to make a triangle with them");
		printf("\nthe perimeter of the triangle is %.2f", points[0] + points[1] + points[2]);
	return 0;
}