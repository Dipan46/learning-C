#include <stdio.h>
int main(int argc, char const *argv[])
{
    float A, B, O;
    //Input
    printf("Enter First Digit: ");
    scanf("%f", &A);
    printf("Enter Second Digit: ");
    scanf("%f", &B);
    //Formula
    O = A + B;
    //Condition
    if (A > 100)
    {
        printf("Enter Value Less Then 100 For First Digit\n");
    }
    else if (A < -100)
    {
        printf("Enter Value Grater Then -100 For First Digit\n");
    }
    else if (B > 100)
    {
        printf("Enter Value Less Then 100 For Second Digit\n");
    }
    else if (B < -100)
    {
        printf("Enter Value Grater Then -100 For Second Digit\n");
    }
    else
    {
        //Formula
        O = A + B;
        //Output
        printf("Total: %f\n", O);
    }
    printf("Enter The Number Exit: ");
    scanf("%a");
    return 0;
}
