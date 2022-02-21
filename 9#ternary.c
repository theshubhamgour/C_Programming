#include<stdio.h>
void main(){
    int a=4;
    int b =3;

    printf("The value of a is: %d\n",a);
    printf("The value of b is: %d\n",b);

    
    // for ternary operator and relational operator (>)

    printf("The greater value is: %d\n",(a>b)? a:b);

    //logical operator
    printf("%d\n",(a>b)&&(b<a));
    printf("%d\n",(a>b)||(a<b));
    printf("%d\n",!(b<a)); //reverses the value


}