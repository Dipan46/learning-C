#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, marks;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Switch case statement
    switch (age)
    {
    case 3:
        printf("Age is 3\n");
        break;

    case 13:
        printf("Age is 13\n");
        break;

    case 23:
        printf("Age is 23\n");
        break;

    default:
        printf("Age is invalid\n");
        break;
    }
    printf("Your marks are: %d\n", marks);
    return 0;
}
