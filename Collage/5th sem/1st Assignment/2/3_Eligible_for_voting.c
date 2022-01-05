#include <stdio.h>
int main()
{
    int a;
    char id;
    printf("Enter your age: ");
    scanf("%d", &a);
    fflush(stdin);
    printf("Do you have voter ID card?(Y/N): ");
    scanf("%c", &id);
    // Condition
    if (a >= 18 && id == 'y' || id == 'Y')
        printf("Eligible");
    else
        printf("Not eligible");
    return 0;
}
