#include <stdio.h>
int main()
{
    char a;
    int t, i;
    printf("For C to F enter(C) and For F to C enter(F)\nEnter: ");
    scanf("%c", &a);
    printf("Enter temperature: ");
    scanf("%d", &i);
    switch (a)
    {
    case 'C':
        t = ((i * 9) / 5) + 32;
        printf("%d Celsius = %d Fahrenheit", i, t);
        break;
    case 'c':
        t = ((i * 9) / 5) + 32;
        printf("%d Celsius = %d Fahrenheit", i, t);
        break;
    case 'F':
        t = ((i - 32) * 5) / 9;
        printf("%d Fahrenheit = %d Celsius", i, t);
        break;
    case 'f':
        t = ((i - 32) * 5) / 9;
        printf("%d Fahrenheit = %d Celsius", i, t);
        break;
    }
    return 0;
}