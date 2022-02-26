#include <stdio.h>

int main()
{
    int a = 56;
    // int *ptr = &a;
    int *ptr = NULL;


    if (ptr != NULL)
    {
        printf("Address of A is: %d", &*ptr);
    }
    else
    {

        printf("The pointer is a null pointer and cannot be dereferenced");
    }

    return (0);
}