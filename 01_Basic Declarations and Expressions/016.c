//.C program to read an amount(integer value) and break the amount into the smallest possible number of bank notes
//* Note: The possible banknotes are 100, 50, 20, 10, 5, 2 and 1
#include <stdio.h>
#include <math.h>
int main()
{
	int amt, note;
	printf("enter number : ");
	scanf("%d", &amt);
	// note of 500
	note = amt / 500;
	if (note != 0)
		printf("%d notes of 500\n", note);
	amt = amt - (note * 500);
	// note of 200
	note = amt / 200;
	if (note != 0)
		printf("%d notes of 200\n", note);
	amt = amt - (note * 200);
	// note of 100
	note = amt / 100;
	if (note != 0)
		printf("%d notes of 100\n", note);
	amt = amt - (note * 100);
	// note of 50
	note = amt / 50;
	if (note != 0)
		printf("%d notes of 50\n", note);
	amt = amt - (note * 50);
	// note of 20
	note = amt / 20;
	if (note != 0)
		printf("%d notes of 20\n", note);
	amt = amt - (note * 20);
	// note of 10
	note = amt / 10;
	if (note != 0)
		printf("%d notes of 10\n", note);
	amt = amt - (note * 10);
	// note of 5
	note = amt / 5;
	if (note != 0)
		printf("%d notes of 5\n", note);
	amt = amt - (note * 5);
	// note of 2
	note = amt / 2;
	if (note != 0)
		printf("%d notes of 2\n", note);
	amt = amt - (note * 2);
	// note of 1
	note = amt / 1;
	if (note != 0)
		printf("%d notes of 1\n", note);
	amt = amt - (note * 1);
	return 0;
}