/*

What is a dangling pointer?
Dangling pointers are pointers that are pointing to a memory location that has been freed or deleted.

/ Dangling pointers arise during object destruction, when an object with an incoming reference is deleted or deallocated,
 without modifying the value of the pointer, so that the pointer still points to the memory location of the deallocated memory.The system may
 reallocate the previously deleted memory; the unpredicted result may occur as the memory may now contain different data.



How to Avoid the Dangling Pointer Errors?
The dangling pointer introduces nasty bugs in our C programming and these bugs frequently become security holes at a time. These dandling pointer errors
can be avoided by initializing the pointer value to the NULL. If we assign the NULL value to the pointer, then the pointer will not point to the memory
 location that has been freed. By assigning the NULL value to the pointer means that the pointer is not pointing to any memory location.

 */

#include <stdio.h>
#include <stdlib.h>
int *functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}
int main()
{
    // Case 1: De allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 45;
    ptr[1] = 56;
    ptr[2] = 54;
    ptr[3] = 78;
    free(ptr); // ptr is now a dangling pointer

    // Case 2: Function returning local variable address
    int *dangptr = functionDangling();
    int *danglingPtr3;

    int *danglingPtr3;
    // Case 3: If a variable goes out of scope
    {
        int a = 12;

        danglingPtr3 = &a;
    }
    // Here variable a goes out of scope which means danglingPtr3 is pointing to a location which is freed
    //  and hence danglingPtr3 is now a dangling pointer
    return (0);
}