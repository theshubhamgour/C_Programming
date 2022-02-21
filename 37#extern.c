// extern can be accessed within and outside the program
// Anywhere acceessable throught the program

#include <stdio.h>

int a=10; //global  varibale which is not inside any function

void fun(){
  printf("%d\n",a);  
}

int main(){
  
  printf("%d\n",a);
  fun();

  if (1==1)
  {
      printf("%d\n",a);
  }
  
}