//* C program to convert a given integer (in seconds) to hours, minutes and seconds
#include <stdio.h>
#include <math.h>
int main()
{
	int sec;
	printf("enter seconds:  : ");
	scanf("%d", &sec);
	int hours = sec / 3600;
	int minutes = (sec - (3600 * hours)) / 60; //| (sec%3600)/60
	int seconds = (sec - (3600 * hours) - (minutes * 60));//|((sec % 3600) % 60)
	printf("hours=%d\nminutes=%d\nseconds=%d\n", hours, minutes, seconds);
	return 0;

	// int sec;
	// printf("enter seconds:  : ");
	// scanf("%d", &sec);
	// int hours = sec / 3600;
	// int minutes = (sec % 3600) / 60;
	// int seconds = ((sec % 3600) % 60);
	// printf("hours=%d\nminutes=%d\nseconds=%d\n", hours, minutes, seconds);
	// return 0;
}