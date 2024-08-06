//.Write a C program that accepts three integers and finds the maximum of three
#include <stdio.h>
#include <math.h>
int main()
{
	int num[3];
	printf("enter number 1 : ");
	scanf("%d", &num[0]);
	printf("enter number 2 : ");
	scanf("%d", &num[1]);
	printf("enter number 3 : ");
	scanf("%d", &num[2]);
	if (num[0] > num[1] && num[0] > num[2])
		printf("num 1 = %d is greater ", num[0]);
	else if (num[1] > num[0] && num[1] > num[2])
		printf("num 2 = %d is greater ", num[1]);
	else if (num[2] > num[1] && num[2] > num[0])
		printf("num 3 = %d is greater ", num[2]);
	return 0;
}