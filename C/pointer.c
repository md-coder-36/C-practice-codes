#include <stdio.h>
int main()
{
    int a = 12;
    int *p = &a;

    printf("the value of a is %d \n", a);
    printf("the value of a is %d\n ", *p);
    printf("the add. of a is %d\n ", &a);
    printf("the value of p/a add. of a is %d \n", p);
    printf("the add of p is %d \n", &p);

    int b[] = {45, 34, 46, 57, 56};
    int *pb = b;

    printf("\nthe add. of first ele : %d", b);
    printf("\nthe add. of first ele : %d", &b[0]);
    printf("\nthe add. of second ele : %d", &b[1]);
    printf("\nthe add. of second ele : %d", b + 1);

    printf("\nthe value of first ele : %d", *(b));
    printf("\nthe value of first ele : %d", *(&b[0]));
    printf("\nthe value of second ele : %d", *(b + 1));
    printf("\nthe value of second ele : %d", *(&b[1]));

    printf("\n %d ", *pb);
    printf("\n %d ", *(++pb));
    printf("\n %d ", *(++pb));
    printf("\n %d ", *(++pb));
    printf("\n %d ", *(++pb));

    int c = 345;
    float d = 8.3;
    void *ptr; // use one pointer for a point two diff Data type variables.
    ptr = &c;
    printf("The value of a : %d\n", *((int *)ptr)); // type casting
    ptr = &d;
    printf("The value of b : %f\n", *((float *)ptr)); // type casting

    int s = 10;
    int *q; // uninitialized or not NULL declared pointer - wild pointer
    q = &s; // no wild pointer

    printf("The value of given variable is : %d", *q);

    int e = 34;
    int *ptr2 = NULL;
    printf("\nValue of e : %d\n", e);
    (ptr2 != NULL) ? printf("The address of e is %d\n", ptr2) : printf("The pointer is null pointer and cannot be dereferenced");
    return 0;
}

// Don't initialize with NULL,pointer give unaceptable output.
// error handling (NULL pointer in printf *ptr print than compiler is confused).
// or you have make conditions
