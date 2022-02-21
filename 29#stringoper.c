#include<stdio.h>
int main(){
    char str[50];
    char str2[40];
    puts("Enter a string");

    gets(str); //input
    puts(str); //output

    // for converting to uppercase
    puts(strupr(str)); 

    //for converting to lowercase
        puts(strlwr(str)); 

    //for printing in reverse text
          puts(strrev(str)); 

    //  to find length of a string
    
    /*
    we cannot use puts for getting the length of a string becuase it 
    returns an integer value therefore we make use of printf.  
    */

    printf("%d",(strlen(str))); 

    



}