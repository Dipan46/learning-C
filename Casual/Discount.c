#include <stdio.h>

int main(int argc, char const *argv[])
{
    int q;
    float p, t;
    //input
    printf("Enter amount of product= ", &q);
    scanf("%d", &q);
    printf("Enter prise of the product: ", &p);
    scanf("%f", &p);
    t = q * p;
    printf("Total: %f\n", t);
    //if else
    if (t >= 1000)
    {
        printf("10 percent discount applied\n");
        //calculation
        t = t - (t * 10 / 100);
        printf("Total: %f\n", t);
    }
    else if (t >= 500)
    {
        printf("5 percent discount applied\nTo have 10 percent discount buy more then 1000 Rs");
        //calculation
        t = t - (t * 5 / 100);
        printf("Total: %f\n", t);
    }
    else
    {
        printf("No discount applied\nto get 5 percent discount \nbuy more then 500 Rs\nTo get 10 percent discount \nbuy  more then 1000 Rs");
    }
    printf("THANKS FOR BUYING");
    scanf("%d");
    return 0;
}
