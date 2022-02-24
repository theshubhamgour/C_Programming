/*
    * String in C:-
                    String is an array of characters. Data of the same type are stored in an array for example,
                    Integers can be stored in an integer array, similarly, a group of characters can be stored 
                    in a character array. Character arrays are also called strings. 
                    A string is a one-dimensional array of characters that is terminated by a null (‘\0’).

*/

#include<stdio.h>
int main(){
    char str[] = {'s','h','u','b', 'h', 'a', 'm','\0'};
    printf(str);

    printf("\nUsing gets and puts: \n");
    gets(str);
    puts(str);
}