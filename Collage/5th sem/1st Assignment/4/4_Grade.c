#include <stdio.h>
int main()
{
    int a;
    printf("Enter number obtained: ");
    scanf("%d", &a);
    if (a >= 0 && a <= 100)
        switch (a / 10)
        {
        case 10:
            printf("Your Grade is A");
            break;
        case 9:
            printf("Your Grade is A");
            break;
        case 8:
            printf("Your Grade is B");
            break;
        case 7:
            printf("Your Grade is C");
            break;
        case 6:
            printf("Your Grade is D");
            break;
        case 5:
            printf("Your Grade is E");
            break;
        case 4:
            printf("Your Grade is E--");
            break;
        default:
            printf("You Grade is F");
        }
    return 0;
}