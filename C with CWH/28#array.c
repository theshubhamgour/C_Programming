/*
 *Demonstration for 1D array.

#include<stdio.h>
int main(){
    int n[4];  //taking input of a 1-d arrat from user
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the element for %d term: ",i);
        scanf("%d",&n[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the element for %d term is %d\n",i,n[i]);

    }

}

*/

/*

 *Demonstration for 2D array.

#include <stdio.h>
int main()
{
    int a[2][4] = {{45, 56, 78, 98},
                   {12, 56, 78, 98}};

    // for printing the 2D array we need to run two for loop

    for (int i = 0; i < 2; i++) // for the row here 2 ::int[2][4]
    {
        for (int j = 0; j < 4; j++) // for column here 4 ::int[2][4]
        {
            printf("The element in %d is %d\n", i, a[i][j]);
        }
    }
}


*/


/*

// Present the same program in matrix from we can use this

#include <stdio.h>
int main()
{
    int a[2][4] = {{45, 56, 78, 98},
                   {12, 56, 78, 98}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

*/

