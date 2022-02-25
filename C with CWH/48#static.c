#include <stdio.h>

int b1 = 46; //global variable
int func1(int b)
{
    static int myvar = 8;
    printf("The value of myvar is: %d \n", myvar);
    // printf("The value of B inside func1() is: %d\n",b);
    // printf("The value of B globally func1() is: %d\n",b1);
    // return b * 10;
    return b1+ myvar;
}
int main()
{
    int b =344;
    int val = func1(b);
    int *ptr = &val;
    printf("The value is: %d", val);
}