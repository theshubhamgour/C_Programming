// Program to demonstrate function with argument and without return value

#include<stdio.h>
int takenumber(){
    int i;
    printf("Enter a number");
    scanf("%d",&i);
    return i;
}
int main(){
    int c;

  c =takenumber();
  printf("Number enterd is: %d",c);
}