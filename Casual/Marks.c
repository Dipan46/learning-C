#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, e;
    //input
    printf("Subject 1: ");
    scanf("%d", &a);
    printf("Subject 2: ");
    scanf("%d", &b);
    printf("Subject 3: ");
    scanf("%d", &c);
    printf("Subject 4: ");
    scanf("%d", &d);
    printf("Subject 5: ");
    scanf("%d", &e);
    //calculation
    int avg, total;
    total = a + b + c + d + e;
    avg = total / 5;
    //output
    printf("Total: %d\n", total);
    printf("Avarage: %d\n", avg);
    return 0;
}
