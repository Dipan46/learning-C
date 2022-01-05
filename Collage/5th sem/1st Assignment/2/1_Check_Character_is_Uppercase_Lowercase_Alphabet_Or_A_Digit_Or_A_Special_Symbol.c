#include <stdio.h>
int main()
{
    char ch;
    printf("Give your input: ");
    scanf("%c", &ch);
    // Condition
    if (ch > 64 && ch < 91)
        printf("Input is an uppercase character");
    else if (ch > 96 && ch < 123)
        printf("Input is a lowercase charactor");
    else if (ch > 47 && ch < 58)
        printf("Input is a number");
    else
        printf("Input is a special charactor");
    return 0;
}
