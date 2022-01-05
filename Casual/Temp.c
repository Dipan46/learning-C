#include <stdio.h>
int main()
{
    int f, c;
    printf("Enter temp in F: ");
    scanf("%d", &f);
    // calculation
    c = ((f - 32) * 5) / 9;

    printf("Temp in C: %d\n", c);
    return 0;
}
