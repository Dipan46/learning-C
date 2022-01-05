#include <stdio.h>
#define N 10
int main()
{
    char V[N] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'}, cha;
    int che, va = 1;
    printf("Enter any letter: ");
    scanf("%c", &cha);
    // loop to access array
    for (che = 0; che < N; che++)
        // Condition
        if (V[che] == cha)
        {
            va++;
        }
    if (va == 2)
        printf("Input is Vowel");
    else
        printf("Input is consonant");
    return 0;
}