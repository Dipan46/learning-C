#include <stdio.h>
void r();
int main()
{
    r();
    return 0;
}
void r()
{
    printf("🖕");
    main();
}