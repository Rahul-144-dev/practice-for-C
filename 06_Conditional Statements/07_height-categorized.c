// Write a C program to accept the height of a person in centimeters and
// categorize the person according to their height
//* Height < 150 -> Dwarf
//* Height == 150 -> Average
//* Height >= 165->Tall
#include <stdio.h>
#include <math.h>
int main()
{
    int height, l;
    printf("enter number : ");
    scanf("%d", &height);
    /// ternary try
    if (height >= 165)
        printf("Tall\n");
    else if (height >= 150)
        printf("Average\n");
    else if (height <= 150)
        printf("Dwarf\n");
    return 0;
}