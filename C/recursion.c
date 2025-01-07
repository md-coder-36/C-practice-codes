// recursion is process of function calls itself and use for other(same) function.


// #include<stdio.h>
// int find_factorial(int);
// int main()
// {
//    int num, fact;
//    //Ask user for the input and store it in num
//    printf("\nEnter any integer number:");
//    scanf("%d",&num);
 
//    //Calling our user defined function
//    fact =find_factorial(num);
 
//    //Displaying factorial of input number
//    printf("\nfactorial of %d is: %d",num, fact);
//    return 0;
// }
// int find_factorial(int n)
// {
//    //Factorial of 0 is 1 
//    if(n==0)
//       return(1);
 
//    //Function calling itself: recursion
//    return(n*find_factorial(n-1));
// }
#include <stdio.h>
int factorial(int number);

int fib(int n)
{
    int f[n + 2];

    f[0] = 0;
    f[1] = 1;
    printf("0 1 ");
    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        printf(" %d ", f[i]);
    }
    return f[n];
}
int main()
{
    int num;
    printf("enter factorial no : \n");
    scanf("%d", &num);
    printf("your %d factorial is %d .\n", num, factorial(num));

     int m;
    printf("give index : ");
    scanf("%d", &m);
    printf("%d \n", fib(m));
    return 0;
}
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

