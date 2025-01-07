#include<stdio.h>
 #define b 10
int main()
{
    float a=5.231;
    printf("value a is =%5.3fok",a);
    printf("\nvalue a is =%8.3fok",a);
    printf("\nvalue a is =%8.5fok",a);
    printf("\nvalue a is =%-8.5fok",a);
    printf("\nvalue a is =%18.4fok",a);
    printf("\nvalue a is =%-18.4fok",a);

    // make constant vriable
    // 1 . write const
    //  const int b=10;
    // b=20; can't be a changed, because this is conatant variable.
    // 2 . define uper side constant variables
    printf("\nb is = %d",b);
    return 0;
}
