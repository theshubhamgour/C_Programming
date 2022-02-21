// Struct is used to access different values with single variable

#include<stdio.h>
struct stu
{
    int roll;
    char name[20];
    double marks;
};

int main(){
    struct stu s;
    
    printf("Enter student record: ");
    scanf("%d%s%lf",&s.roll,&s.name,&s.marks);
    
    printf("The roll number is: %d\n The name is: %s\n Marks are: %lf",s.roll,s.name,s.marks);
    
}