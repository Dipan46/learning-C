#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int cas;
    float a, b, c, d, e, f, xe, ye;
    float alph, gamm, bet, squ, pi, thet, theta;

    printf("enter values of a,b,c,d,e,alp,cas,theta\n");

    scanf("%f%f%f%f%f%f%d%f", &a, &b, &c, &d, &e, &alph, &cas, &theta);
    printf("theta   xe  ye \n");

    thet = 0;
    pi = 4 * atan(1);

    while (thet < 359 * pi / 180)
    {
        gamm = atan(a * sin(thet) / (d - a * cos(thet)));
        squ = a * a + d * d - 2 * a * d * cos(thet);
        f = pow(squ, .5);

        if (cas == 1)
            bet = acos((b * b + f * f - c * c) / 2 * b * f) - gamm;
        if (cas == 2)
            bet = asin((c - a * sin(thet)) / b);

        xe = a * cos(thet) + e * cos(alph * pi / 180 + bet);
        ye = a * sin(thet) + e * sin(alph * pi / 180 + bet);

        printf("%10.2f %10.2f %10.2f\n", (thet * 180 / pi), xe, ye);
        thet = thet + theta * pi / 180;
    }
    return 0;
}
