#include <stdio.h>
#include "stdlib.h"
#define PI 3.14        // define variable same as global  variable..
#define SQUARE(r) r *r // define macro (same as function in )
int main()
{
    int radius;
    printf("Enter your lenth of radius : \n");
    scanf("%d", &radius);
    printf("Area of a circle :%f \n", PI * SQUARE(radius));

    // PREPROCESSER MACROS/FUNCTIONS..
    printf("Today's Date :%d \n", __DATE__);
    printf("Current time :%d \n", __TIME__);
    printf("This file name :%d \n", __FILE__);
    printf("Run stdc function :%d \n", __STDC__);
    printf("Current line executed :%d \n", __LINE__);

    return 0;
}