#include <stdio.h>

int main()
{
    int s;

    printf("How meany s you have passed out of 6: ", &s);
    scanf("%d", &s);

    if (s >= 2)
    {
        printf("You have win Rs.45");
    }
    elseif(s >= 1)
    {
        printf("You have win Rs.20");
    }
    elseif(s >= 0)
    {
        printf("You don't get anything");
    }
    return 0;
}
