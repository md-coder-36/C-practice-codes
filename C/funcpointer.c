#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}
void greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

void greetGmAndExecute(int (*fptr)(int, int))
{
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1, 2)); // Testing the function
    int (*fPtr)(int, int);                           // Declaring a function pointer
    fPtr = &sum;                                     // Creating a function pointer
    int d = (*fPtr)(4, 6);                           // Dereferencing a function pointer
    printf("The value of d is %d\n", d);

    // callback function

    int (*ptr)(int, int);
    // int (*ptr1)(int, int);
    ptr = sum;
    // ptr1 = sum;
    greetHelloAndExecute(ptr);
    greetGmAndExecute(ptr);

    return 0;
}
