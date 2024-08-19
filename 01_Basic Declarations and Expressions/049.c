// print the elements of an array with length 7. Before printing, insert the triple of the previous position,
// starting from the second position
// For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162
#include <stdio.h>
int main()
{
	int n, arr[5];
	printf("enter first element of the array : ");
	scanf("%d", &n);
	for (int i = 0; i <= 4; i++)
	{
		arr[i] = n;
		printf("arr[%d] = %d\n", i, n);
		n *= 3;
	}
	return 0;
}
//. enter first element of the array : 2
// arr[0] = 2
// arr[1] = 6
// arr[2] = 18
// arr[3] = 54
// arr[4] = 162