#include <stdio.h>

    int main(){
        int a=345;
        float b=8.6;
        void *ptr;
        
        ptr = &b;
        printf("The value of B is: %f\n",*((float*)ptr));

        ptr = &a;
        printf("The value of A is: %d\n",*((int*)ptr));

    return(0);
}