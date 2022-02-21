#include<stdio.h>

int main(){
    int num;
    FILE *fp;
    
    //for creating a file
    fp =fopen("D:\\abc.txt","w");
    
    if (fp==NULL)
    {
        printf("File not created");
        exit(1);
    }
    printf("File Created Successfully\n");

    // to write in a file
    printf("\nEnter a number to be stored in the file: ");
    scanf("%d",&num);
    printf("Data Updated");
    
   
    fclose(fp);
   
}