#include<stdio.h>
int main(){
    
    int d = 5;
    float f =14.9;
    char c = 'A';

    // to print integer value:
    printf("\n The value of integer is %d\n", d);

    // to print float value:
    printf("The value of float is %f\n", f);      

    // to print character value
    printf("\n The value of character is %c", c);      


    // EScape sequence character:

                                    // Print character backslash(\) using printf function
                                        printf("\n C programming \m/ ");

                                        
                                        // Prints a new line before and after the text
                                        printf("\n This is my C program\n"); 
                                        
                                        
                                        // Use \" to print double quote and \' for single quote
                                        printf("\n Welcome to \"The C Programming tutorial\"");

                                        printf("\n Welcome to \'C programming series \'") ;   

                                        
                                        // To provide tab space between two words
                                        printf("\nHello \t Viewers");

                                        
                                        // To add vertical tab character.
                                        printf("\nHello Viewers");

                                        
                                        //for a beep sound we use \a

                                        printf("\nBeep...\a"); 

}