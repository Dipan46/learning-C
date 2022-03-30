#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    rectangle(300, 50, 450, 100);
    getch();
    closegraph();
    return 0;
}
