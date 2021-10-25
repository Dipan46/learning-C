#include <stdio.h>
int main()
{
    char En;
    printf("Enter a letter: ");
    scanf("%c", &En);
    if (En == 'A' || En == 'E' || En == 'I' || En == 'O' || En == 'U' ||
        En == 'a' || En == 'e' || En == 'i' || En == 'o' || En == 'u')
    {
        printf("Input is Vowel");
    }
    else
    {
        printf("Input is Consonant");
    }

    return 0;
}
