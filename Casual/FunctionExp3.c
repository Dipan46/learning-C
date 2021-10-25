#include <stdio.h>

int india();
void italy();
void germany();

int main()
{
    printf("Im in main\n");
    printf("%d\n", india());
    italy();
    germany();

    return 0;
}

int india(int a, int b)
{
    a = 5;
    b = 5;
    return a + b;
}
void italy()
{
    printf("Im in italy\n");
}
void germany()
{
    printf("Im in Germany\n");
}
