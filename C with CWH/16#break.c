#include<stdio.h>
int main(){
 int i,age;
 for (int i = 0; i < 15; i++)
 {
     printf("Enter your age: %d\n",i);
     scanf("%d",&age);
     if (age>10)
     {
         printf("Out of bound");
         break;
     }
     
 }
    
}