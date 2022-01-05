#include <stdio.h>
int main()
{
    int N, a, b, c;
    printf("Enter a number: ");
    scanf("%d", &N);
    // calculation
    a = N;
    b = N * N;
    c = N * N * N;
    printf("1st power is: %d\n2nd power is: %d\n3rd power is: %d", a, b, c);
    return 0;
}