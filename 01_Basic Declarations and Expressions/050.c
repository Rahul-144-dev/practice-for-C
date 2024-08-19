// read an array of length 5 and print the position and value of the array elements of value less than 5
#include <stdio.h>
#include <math.h>
int main()
{
  int arr[5];
  printf("enter 5 elements of array\n");
  for (int i = 0; i <= 4; i++)
  {
    // printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i <= 4; i++)
  {
    if (arr[i] < 5)
      printf("arr[%d] = %d\n", i, arr[i]);
  }
  return 0;
}
// #include <stdio.h>
// #define AL 5  // Define the size of the array as 5
// #define MAX 5 // Define a maximum value for comparison
// int main()
// {
//   float N[AL]; // Declare an array of size 5 to hold floating-point numbers
//   int i;
//   // Prompt for user input
//   printf("Input the 5 members of the array:\n");
//   // Read and store user input into the array
//   for (i = 0; i < AL; i++)
//   {
//     scanf("%f", &N[i]);
//   }
//   // Iterate through the array and print elements less than MAX
//   for (i = 0; i < AL; i++)
//   {
//     if (N[i] < MAX)
//     {
//       printf("A[%d] = %.1f\n", i, N[i]);
//     }
//   }
//   return 0;
// }
