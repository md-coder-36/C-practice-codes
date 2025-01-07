#include <stdio.h>

int main()
{
    int i, n;
    int t = 0;

    printf("Give the size of array : ");
    scanf("%d", &n);

    int a[n];

    printf("Give elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Array is : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    for (i = 0; i < n / 2; i++)
    {
        t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
    printf("\n");

    for (i = 0; i < n; i++)
        printf(" %d", a[i]);

    return 0;
}
