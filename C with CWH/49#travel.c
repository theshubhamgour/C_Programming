#include <stdio.h>
#include<string.h>
/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/
typedef struct Driver
{
    char name[45];
    char dlno[45];
    char route[45];
    int kms;
}dr;

int main()
{
    struct Driver d1,d2,d3;
    printf("*******Enter the details of the Driver********\n");
   
    //For First Driver
    printf("            Enter the name of First Driver: \n");
    scanf("%s",&d1.name);

    printf("            Enter the DL_No of the First Driver: \n");
    scanf("%s",&d1.dlno);

    printf("            Enter the route of the First Driver: \n");
    scanf("%s",&d1.route);

    printf("            Enter the KM Travelled by the First Driver: \n");
    scanf("%d",&d1.kms); 

    //For Second Driver
    printf("            Enter the name of Second Driver: \n");
    scanf("%s",&d2.name);
    
    printf("            Enter the DL_No of the Second Driver: \n");
    scanf("%s",&d2.dlno);
    
    printf("            Enter the route of the Second Driver: \n");
    scanf("%s",&d2.route);
    
    printf("            Enter the KM Travelled by the Second Driver: \n");
    scanf("%d",&d2.kms); 


    //For Third Driver
    printf("            Enter the name of Third Driver: \n");
    scanf("%s",&d3.name);
    
    printf("            Enter the DL_No of the Third Driver: \n");
    scanf("%s",&d3.dlno);
    
    printf("            Enter the route of the Third Driver: \n");
    scanf("%s",&d3.route);
    
    printf("            Enter the KM Travelled by the Third Driver: \n");
    scanf("%d",&d3.kms);


    printf("************Printing information of Drivers************* \n");
    printf("\n\n\n**First Driver**\n Name: %s\nDL number: %s\nRoute Travelled: %s \nKM: %d",d1.name,d1.dlno,d1.route,d1.kms);
    printf("\n\n\n**Second Driver**\n Name: %s\nDL number: %s\nRoute Travelled: %s \nKM: %d",d2.name,d2.dlno,d2.route,d2.kms);
    printf("\n\n\n**Third Driver**\n Name: %s\nDL number: %s\nRoute Travelled: %s \nKM: %d",d3.name,d3.dlno,d3.route,d3.kms);

}
