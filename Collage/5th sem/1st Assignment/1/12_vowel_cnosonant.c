#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any letter: ");
    scanf("%c", &ch);
    // loop to access array
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Input is vowel");
    else
        printf("Input is consonant");
    return 0;
}