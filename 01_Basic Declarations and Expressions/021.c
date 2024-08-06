//. reads an integer and checks the specified range to which it belongs.
//| Print an error message if the number is negative and greater than 80
//* Specified Range : [ 0, 20 ], [ 21, 40 ], [ 41, 60 ], [ 61, 80 ]
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    if (n < 0 || n > 80)
        printf("error");
    else if (n >= 0 && n <= 20)
        printf("range[0,20]");
    else if (n >= 21 && n <= 40)
        printf("range[21,40]");
    else if (n >= 41 && n <= 60)
        printf("range[41,80]");
    else if (n >= 61 && n <= 80)
        printf("range[61,80]");
    return 0;
}