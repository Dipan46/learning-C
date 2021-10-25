#include <stdio.h>

int main(int argc, char const *argv[])
{
    int D, m, feet, inch, cm;
    //input
    printf("Enter Distance(Km): ");
    scanf("%d", &D);
    //calculation
    m = D * 1000;
    feet = D * 3281;
    inch = D * 39370;
    cm = D * 100000;
    //output
    printf("M: %d\n", m);
    printf("Feet: %d\n", feet);
    printf("Inch: %d\n", inch);
    printf("CM: %d\n", cm);
    return 0;
}
