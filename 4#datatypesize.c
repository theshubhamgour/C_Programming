#include <stdio.h>
void main()
{
    int a = 16;
    float b = 16.1f;

    /* The sizeof() function in C is a built - in function that is used to calculate the size(in bytes)
     that a data type occupies in ​the computer’s memory. */


   printf("Size of variable a : %d\n",sizeof(a));
    // Where %d is format specifier
   printf("Size of variable b : %d\n",sizeof(b));
   
   printf("Size of int data type : %d\n",sizeof(int));
   printf("Size of char data type : %d\n",sizeof(char));
   printf("Size of float data type : %d\n",sizeof(float));
   printf("Size of double data type : %d\n",sizeof(double));


}
