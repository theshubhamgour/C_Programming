/*
 C Language Provides two methods of type casting :

*Implicit type casting: Implicit type casting means conversion of data types from one to another 
                        without losing its original meaning or sense.
*Explicit type casting: Explicit type casting means conversion of data type from one to another forcefully by programmer. 
                        It is user defined conversion.


*/

#include <stdio.h>
int main(){
    int a=4;
    float b=45.6;
    printf("Value is: %d\n",(int)b);  //typecasted B to int
    printf("Value is: %f\n",(b/5));
    

}

