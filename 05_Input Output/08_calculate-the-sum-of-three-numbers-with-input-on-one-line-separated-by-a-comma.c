#include <stdio.h>
int main()
{
    double num1, num2, num3;
    char input[100];
    // Ask the user to input three numbers separated by commas
    printf("Enter three numbers separated by commas: ");
    fgets(input, sizeof(input), stdin);
    // Parse the input string and extract the three numbers
    sscanf(input, "%lf,%lf,%lf", &num1, &num2, &num3);
    // Calculate the sum of the three numbers
    double sum = num1 + num2 + num3;
    // Display the sum of the numbers
    printf("The sum of the three numbers is: %.2lf\n", sum);
    return 0;
}
