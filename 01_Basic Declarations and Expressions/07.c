// Write a C program to display multiple variables.
// Sample Variables
#include <stdio.h>
#include <math.h>
int main()
{
    int a = 125;
    int b = 12345;
    short s = 4043;
    long ax = 1234567890;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;
    printf(" a + c = %d\n", a + c);
    printf(" x + c = %f\n", x + c);
    printf("dx + x = %lf\n", dx + x);
    printf("((int)dx) + ax = %ld\n", ((int)dx) + ax);
    printf(" a + x = %f\n", a + x);
    printf(" s + b = %d\n", s + b);
    printf("ax + b = %ld\n", ax + b);
    printf(" s + c = %d\n", s + c);
    printf("ax + c = %ld\n", ax + c);
    printf("ax + ux = %lu\n", ax + ux);
    return 0;
}
// a+ c
// x + c
// dx + x
// a + x
// s + b
// ax + b
// s + c
// ax + c
// ax + ux
//((int)dx) + ax