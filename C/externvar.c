#include <stdio.h>
int a = 7;
int main()
{
    extern int a; // global var declaretion in C.
    printf("the value of global var. : %d", a);

    register int b = 1; // store in fast memory , uses frequntly.
    for (int i = 0; i < 100000; i++)
    {
        b++;
    }
    printf("\nb = %d \n", b);
    int c = 1;
    for (int j = 0; j < 100000; j++)
    {
        c++;
    }
    printf("c = %d ", c);

    return 0;
}