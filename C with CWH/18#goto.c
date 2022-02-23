/*

*A goto statement in C programming language provides an unconditional jump from the ‘goto’ to a labeled statement 
in the same function.
NOTE − Use of goto statements is highly discouraged or avoided in any programming language because it makes difficult
 to trace the control flow of a program to fellow programmer.

*/

/*

#include<stdio.h>
int main(){

    printf("This is it!\n");
    goto end;

    printf("This will not get print\n");

    end:
    printf("\nGoto sent it here and will get print");  //This goto will transfer the control to end: i.e. out of both loop 
}

*/

#include <stdio.h>

int main()
{
 
    int num;

        for(int j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if(num==0){
                goto end;
            }
        }
        

    end:
    

    return 0;
}

