#include<stdio.h>

int main(){
    static int a=10; //automactic :: static variable
    
    if (1==1)
    {
        static int b=20; //static
        printf("%d\n",a);
        printf("%d\n",b);
    }
//    however b is not defined outside the loop only accessable within the loop
       printf("%d\n",a);
        // printf("%d\n",b);   //will get an error

        // one difference betwween static and auto is lifetime rest is same

}