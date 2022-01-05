#include <stdio.h>
void add(int *a, int *b)
{
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;
}
int main()
{
    int a = 5, b = 4;
    add(&a, &b);
    printf("%d, %d", a, b);
    return 0;
}
