//. Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour.
//* Print the ID and salary (with two decimal places) of the employee for a particular month
#include <stdio.h>
#include <math.h>
int main()
{
    char Emp_id[10];
    double work_hours[1], amt_per_hour[1];
    printf("enter Emp-ID : ");
    scanf("%s", &Emp_id);
    printf("enter work hours : ");
    scanf("%lf", &work_hours[0]);
    printf("enter amt_per_hour : ");
    scanf("%lf", &amt_per_hour[0]);
    printf("salary of the employee :\n Emp_Id = %s\n Salary = U$ %.2lf", Emp_id, work_hours[0] * amt_per_hour[0]);
    return 0;
}