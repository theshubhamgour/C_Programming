#include <stdio.h>
int main()
{
    /*
      char a = '3';
      char *ptra = &a;
      printf("%d\n", ptra); //pointer address

      ptra--; //minus one
      printf("%d\n", ptra);

      ptra++; //plus one
      printf("%d\n", ptra);


      printf("%d", ptra - 2); //plus one

  */

    int arr[5] = {11, 22, 88, 4, 455};

    // Both the values will be same for first element
    printf("%d\n", arr);
    printf("%d\n", &arr[0]);

    printf("%d\n", arr + 1); // 2nd element
    printf("%d\n", &arr[1]);

    // printing vlaues:///
    printf("Value at frist is: %d\n", arr[1]);
    printf("Value at frist is: %d\n", *(&arr[1]));
    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first element of the array is %d \n", arr[0]);
    printf("The value at address of first element of the array is %d \n", *(arr));
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %d \n", arr[1]);
    printf("The value at address of second element of the array is %d \n", *(arr + 1));
}