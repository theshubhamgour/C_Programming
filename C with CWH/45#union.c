#include<stdio.h>
#include<string.h>

union student     //one memory at a time save saves rest is same like structure
{
    int marks;
    int id;
    char fav;
    char name[34];
};

int main(){
 union student s1;
    strcpy(s1.name, "Harry");
    s1.fav= 'y';
    s1.marks=99;
    s1.id=45;

    
    printf("The id is %d \n", s1.id);
    printf("The marks is %d \n", s1.marks);
    printf("The fav_char is %c \n", s1.fav);
    printf("The name is %s \n", s1.name);
    
}