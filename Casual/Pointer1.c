#include <stdio.h>

int main()
{
    int a = 4;
    int *ptra = &a;
    int *ptr2 = NULL;
    int *ptr3;

    printf("The address of pointer to a is: %p\n", &ptra);
    printf("The address of a is: %p\n", &a);
    printf("The address of a is: %p\n", ptra);
    printf("The value of a is: %d\n", *ptra);
    printf("The value of a is: %d\n", a);
    printf("The address of NULL pointer: %p\n", ptr2);
    printf("The Address of garbage: %p", ptr3);

    return 0;
}
