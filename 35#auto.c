#include<stdio.h>

int main(){
    auto int a=10; //automactic :: Local variable
    
    if (1==1)
    {
        auto int b=20; //local
        printf("%d\n",a);
        printf("%d\n",b);
    }
//    however b is not defined outside the loop only accessable within the loop
       printf("%d\n",a);
        // printf("%d\n",b); //will get an error

}