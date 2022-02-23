// Program will add numbers until the user enters zero

#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index);
        index++;
    } while (index < num);
}