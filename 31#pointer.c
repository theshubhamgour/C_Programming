#include<stdio.h>
int main(){
    int *p,**q, a=10;
    p =&a;
    q =&p;
    printf("%d\n",a);  //value of a
    printf("%d\n",&a); //address of a
    printf("%d\n",p);  //address of a
    printf("%d\n",*p); //10
    printf("%d\n",q);  //address of pointer p
    printf("%d\n",*q); //address of a
    printf("%d\n",**q); //10
}