//. print the roots of Bhaskara’s formula from the given three floating numbers.
//* Display a message if it is not possible to find the roots
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, pr1;
    printf("enter number(a) : ");
    scanf("%lf", &a);
    printf("enter number(b) : ");
    scanf("%lf", &b);
    printf("enter number(c) : ");
    scanf("%lf", &c);
    pr1 = pow(b, 2) - (4 * a * c);
    pr1 = sqrt(pr1);
    if (pr1 > 0 && a != 0)
    {
        double x1, x2;
        x1 = (-b + pr1) / (2 * a);
        x2 = (-b - pr1) / (2 * a);
        printf("root x1 = %.2lf\nroot x2 = %.2lf", x1, x2);
    }
    else
        printf("\nImpossible to find the roots.\n");
    return 0;
}
