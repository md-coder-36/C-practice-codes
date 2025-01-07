#include <stdio.h>
int main()
{
    char ch;
    char s[24];
    char sen[100];

    scanf("%c\n%s\n%[^\n]s", &ch, s, sen); // take string
    printf("%c\n%s\n%s", ch, s, sen);

    return 0;
}
