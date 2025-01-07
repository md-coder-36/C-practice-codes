#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has a value of %s \n", i, argv[i]);
    }
    return 0;
}

// For give value in main function by direct access on executing file.

// PS D:\future\C> .\checkCLargs.exe 12345 12345
// The value of argc is 3
// This argument at index number 0 has a value of D:\future\C\checkCLargs.exe
// This argument at index number 1 has a value of 12345
// This argument at index number 2 has a value of 12345