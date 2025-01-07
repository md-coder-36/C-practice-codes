#include <stdio.h>
int global = 36; // global variable
int ivalue()
{
    static int s; // not initialize static var , so s = 0 auto initialize..
    printf("the value of static s = %d \n", s);
    s++;
    return s;
}

int main()
{
    int a = 10; // diff var. with fun. ivalue a .

    printf("the of local a = %d \n", a);
    printf("the global var = %d in main function.\n\n", global);

    printf("function value is : %d \n\n", ivalue());
    printf("function value is : %d \n\n", ivalue());

    return 0;
}


