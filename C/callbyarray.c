#include <stdio.h>

int sum(int *a,int *b)
{
    return (*a + *b);
}
int subtract(int *a,int *b)
{
    return (*a - *b);
}

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0] = 382; // Very important point that if you change any value here, it gets reflected in main()
    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
}

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int arr[2][2] =  {2, 13, 9, 3};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);

    // call by reference
    int x,y;
    printf("give 2 value for functions arguments : \n");
    scanf("%d%d",&x,&y);
    printf("the values of a and b before task :%d , %d \n",x,y);
    printf("the values of a and b after task :%d , %d",sum(&x,&y),subtract(&x,&y));
    
    return 0;
}
