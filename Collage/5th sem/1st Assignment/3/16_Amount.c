#include <stdio.h>
int main()
{
    int a;
    printf("Enter amount: ");
    scanf("%d", &a);
    while (a > 0)
    {
        if (a >= 2000)
        {
            int t = a / 2000;
            printf("Quantity of 2000 note: %d\n", t);
            a = a % 2000;
        }
        else if (a >= 500)
        {
            int f = a / 500;
            printf("Quantity of 500 note: %d\n", f);
            a = a % 500;
        }
        else if (a >= 200)
        {
            int th = a / 200;
            printf("Quantity of 200 note: %d\n", th);
            a = a % 200;
        }
        else if (a >= 100)
        {
            int h = a / 100;
            printf("Quantity of 100 note: %d\n", h);
            a = a % 100;
        }
        else if (a >= 50)
        {
            int fi = a / 50;
            printf("Quantity of 50 note: %d\n", fi);
            a = a % 50;
        }
        else if (a >= 20)
        {
            int tw = a / 20;
            printf("Quantity of 20 note: %d\n", tw);
            a = a % 20;
        }
        else if (a >= 10)
        {
            int tn = a / 10;
            printf("Quantity of 10 note: %d\n", tn);
            a = a % 10;
        }
        else if (a >= 5)
        {
            int fi = a / 5;
            printf("Quantity of 5 note: %d\n", fi);
            a = a % 5;
        }
        else if (a >= 2)
        {
            int TW = a / 2;
            printf("Quantity of 2 note: %d\n", TW);
            a = a % 2;
        }
        else if (a >= 1)
        {
            int o = a / 1;
            printf("Quantity of 1 note: %d\n", o);
            a = a % 1;
        }
    }

    return 0;
}