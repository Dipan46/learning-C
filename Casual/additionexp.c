#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;

    printf("Enter a value: ");
    scanf("%d", &a);

    printf("%d, %d, %d\n", a, ++a, a++);

    return 0;
}
