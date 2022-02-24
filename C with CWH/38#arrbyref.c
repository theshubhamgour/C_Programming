/*

#include<stdio.h>
int array(int arr[]){
    for (int i = 0; i < 4; i++)
    {
        printf("Value of array is: %d\n",arr[i]);
    }

}
int main(){
    int arr[4] = {14,56,78,45};
    array(arr);

}

*/

#include <stdio.h>

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}
int main()
{
    int arr[2][2] = {{12, 45},{46, 789}};
    func3(arr);
}