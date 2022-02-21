#include<stdio.h>
void main(){
    int a,b,c;
    char ch;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\nEnter one operation: %d",&c);
    
    switch (ch)
    {
    case '+':
    c = a+b;
        printf("The addition is: %d",c);
        break;

    case '-':
    c = a-b;
        printf("The substraction is: %d",c);
        break;

    case '*':
    c = a*b;
        printf("The addition is: %d",c);
        break;

    case '/':
    c = a/b;
        printf("The addition is: %d",c);
        break;
    
    default:
    printf("Invalid operation");
        break;
    }
}