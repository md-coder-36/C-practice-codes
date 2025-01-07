#include <stdio.h>
#include <stdlib.h> // standard library function. for Dynamic memory allocation
int main()
{
    int *p, n;
    printf("how many bytes you are required : \n");
    scanf("%d", &n);

    /*  // By using malloc() function

        // p = (int *)malloc(n * sizeof(int));

        // printf("Give %d times values for Dynamically array : ", n);
        // for (int i = 0; i < n; i++)
        //     scanf("%d", &p[i]);      // no give any value,malloc initialize with garbage values.

        // for (int i = 0; i < n; i++)
    */
    //     printf("%d  ", p[i]);

    // By using calloc() function.

    p = (int *)calloc(n, sizeof(int));

    printf("Give %d times values for Dynamically array : ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &p[i]); // no give any value , so calloc initialize with 0.

    for (int i = 0; i < n; i++)
        printf("p[%d] = %d \n", i, p[i]);

    // For require more bytes/size use realloc() function.

    int m;
    printf("Give new size of array :  "); // change array size dynamically by realloc().
    scanf("%d", &m);
    p = (int *)realloc(p, m * sizeof(int));

    printf("Give %d times values for new D. array : ", m);
    for (int i = 0; i < m; i++)
        scanf("%d", &p[i]);

    for (int i = 0; i < m; i++)
        printf("p[%d] = %d \n", i, p[i]);

    // Free using memory.

    free(p); // delete all record by entered data.

    // for (int i = 0; i < n; i++)            //use malloc/calloc put n,realloc put m.
    //     printf("p[%d] = %d \n", i, p[i]);

    return 0;
}