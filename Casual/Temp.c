#include<stdio.h>


int main(int argc, char const *argv[])
{
    int f, c;
    //input
    printf("Enter temp in F: ");
    scanf("%d",&f);
    //calculation
    c=((f-32)*5)/9;
    //output
    printf("Temp in C: %d\n",c);
    return 0;
}
