#include<stdio.h>

int a; //global varialble
// Can be used globally

void main()
{
    int b;         //local variable (can be used within main function)
    static int c;  //static (can be used in main but the value will not change)
    
    printf("%d\n",a); //default value of global variable is 0
    printf("%d\n",b);//default value of local variable is NULL/0
    printf("%d\n",c);//default value of static variable is 0
}