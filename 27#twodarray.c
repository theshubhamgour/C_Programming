// Program to demostrate 2-D array
#include<stdio.h>

void main() {

    int a[2][2];//two rows and two columns

    // where [] is called sub script operator

     printf("Array elements: ");

    for (int i = 0; i < 2; i++) //rows
    {
        for (int j = 0; j < 2; j++) //columns
        {
            scanf("%d",&a[i][j]);
        }
        
    }

         printf("Elements are: \n");

    for (int i = 0; i < 2; i++) //rows
    {
        for (int j = 0; j < 2; j++) //columns
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    
}