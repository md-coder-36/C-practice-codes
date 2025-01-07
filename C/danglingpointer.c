#include <stdio.h>
#include <stdlib.h>
int sum = 0;

int *functionDangling()
{
    sum = 34 + 23;
    return &sum;
}
int main()
{
    // Case 1: De allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); // ptr is now not point NULL so that is...dangling pointer
    printf("The Ptr is : %d \n\n", ptr);

    // Case 2: Function returning local variable address
    int *dangPtr = functionDangling(); // dangPtr is now a dangling pointer.
    printf("The dangPtr is : %d \n", dangPtr);
    printf("The dangPtr is : %d \n\n", functionDangling());

    // Case 3: If a variable goes out of scope
    int *danglingPtr3;
    { // for minimum var. scope
        int a = 12;
        danglingPtr3 = &a;
    } // scope is ended for a variable.
    printf("The danglingPtr3 is : %d\n", *danglingPtr3);
    // Here variable a goes out of scope which means danglingPtr3
    // is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer

    return 0;
}
