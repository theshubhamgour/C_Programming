//needs to be accessed one by one
//will execute one by one

#include<stdio.h>
union stu
{
    int roll;
    char name[20];
    double marks;
};

int main(){
    union stu s;
    
    printf("Enter student roll number: ");
    scanf("%d",&s.roll);
    printf("%d",s.roll);

    printf("\nEnter student name: ");
    scanf("%s",&s.name);
    printf("\n%s",s.name);

    printf("\nEnter student marks: ");
    scanf("%lf",&s.marks);
    printf("\n%lf",s.marks);

    
}