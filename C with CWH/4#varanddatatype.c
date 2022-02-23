/**
 
 *Naming a Variable:
                    *A variable name can contain alphabets, digits, and underscore (-) only.
                    *The starting letter can not be a digit.
                    *White spaces cannot be used.
                    *The name should not be reserved keyword or special character.

*Datatypes: 
            *Basic Datatypes: int,char,float,double
            *Derived Data type: array, pointer,structure,union (derived from basic data types)
            *Enumeration Datatype: enum
            *Void Datatype: void (meaning nothing)

 **/

#include<stdio.h>
int main(){
    
    int a=10;
    float b=14.5;
    char ch = 'A';
    double d= 14.56565;

    printf("%d\n",a);
    printf("%f\n",b);
    printf("%c\n", ch);
    printf("%lf\n",d);

}
