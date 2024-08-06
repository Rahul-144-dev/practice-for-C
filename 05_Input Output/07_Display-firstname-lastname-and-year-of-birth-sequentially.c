#include <stdio.h>
#include <math.h>
int main()
{
    int birth_day, birth_month, birth_year;
    char first_name[20], last_name[20];
    printf("enter birth day -> ");
    scanf("%d", &birth_day);

    printf("enter birth month -> ");
    scanf("%d", &birth_month);

    printf("enter birth year -> ");
    scanf("%d", &birth_year);

    printf("Enter first name -> ");
    scanf("%s", first_name);

    printf("Enter last name -> ");
    scanf("%s", last_name);
    printf("Name->%s %s\nDob->%d/%d/%d", first_name, last_name, birth_day, birth_month, birth_year);
    return 0;
}
