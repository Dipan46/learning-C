#include <stdio.h>
int main()
{
    char c;
    printf("Enter any  letter: ");
    scanf("%c", &c);
    switch (c)
    {
    case 'A':
        printf("It's a vowel");
        break;
    case 'E':
        printf("It's a vowel");
        break;
    case 'I':
        printf("It's a vowel");
        break;
    case 'O':
        printf("It's a vowel");
        break;
    case 'U':
        printf("It's a vowel");
        break;
    case 'a':
        printf("It's a vowel");
        break;
    case 'e':
        printf("It's a vowel");
        break;
    case 'i':
        printf("It's a vowel");
        break;
    case 'o':
        printf("It's a vowel");
        break;
    case 'u':
        printf("It's a vowel");
        break;
    default:
        printf("It's not a vowel");
        break;
    }
    return 0;
}