/*

#include<stdio.h>

int changeinval(int *valueofa){
    *valueofa = 130;

}
int main(){
    int a=13, b=45;
    printf("Value before 'A' is: %d \n",a);
    changeinval(&a);
    printf("Current value of 'A': %d",a);
}

*/

// Quick Quiz:
// Given two numbers a and b,  add them then subtract them and assign them to a and b 
// using call by reference.

// a = 4
// b = 3

// after running the function, the values of a and b should be:
// a = 7
// b = 1

#include <stdio.h>

int quiz(int *addofa, int *addofb)
{
    int add,sub;
    add = *addofa + *addofb;
    sub = *addofa - *addofb;
    *addofa = add;
    *addofb = sub;
}

int main()
{
    int a = 4, b = 3;
    printf("Value of A: is %d\n Value of B is: %d", a, b);
    quiz(&a,&b);
    printf("\nThe addition is: %d\n",a);
    printf("The substraction is: %d\n",b);
}