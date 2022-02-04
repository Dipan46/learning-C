#include <stdio.h>
#include <conio.h>
int main()
{
    char ch[] = "I am not an Idiot.";
    char c;
    int i = 0;
    printf("Write Your Name: ");
    while (c != '1')
    {
        c = getch();
        printf("%c\a", ch[i]);
        i++;
        if (i == 19)
            break;
    }
    return 0;
}