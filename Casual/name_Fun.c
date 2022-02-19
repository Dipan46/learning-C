#include <stdio.h>
void name();
void D();
void i();
void p();
void a();
void n();
int main()
{
    name();
    return 0;
}
void name()
{
    D();
}
void D()
{
    printf("D");
    i();
}
void i()
{
    printf("i");
    p();
}
void p()
{
    printf("p");
    a();
}
void a()
{
    printf("a");
    n();
}
void n()
{
    printf("n");
}