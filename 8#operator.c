#include<stdio.h>
void main(){
    int a= 10;

    printf("%d\n",a);

    printf("%d\n",++a);  //11
    printf("%d\n",a++);  //11 then +1 
    printf("%d\n",--a);  //12 -1 =11
    printf("%d\n",a--);  //11 - 1 = 10
    printf("%d",a);      //10

    a+=10; //compound assignment operator


}