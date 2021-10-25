#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a0ht, a0wd;
    int a1ht, a1wd, a2ht, a2wd;
    int a3ht, a3wd, a4ht, a4wd;
    int a5ht, a5wd, a6ht, a6wd;
    int a7ht, a7wd, a8ht, a8wd;
    a0ht = 1189;
    a0wd = 841;
    printf("Size of A0 paper\nHight= %d\nWidth= %d\n", a0ht, a0wd);
    a1ht = a0ht;
    a1wd = a0wd / 2;
    printf("Size of A1 paper\nHight= %d\nWidth= %d\n", a1ht, a1wd);
    a2ht = a1ht;
    a2wd = a1wd / 2;
    printf("Size of A2 paper\nHight= %d\nWidth= %d\n", a2ht, a2wd);
    a3ht = a2ht;
    a3wd = a2wd / 2;
    printf("Size of A3 paper Hight= %d\nWidth= %d\n", a3ht, a3wd);
    a4ht = a3ht;
    a4wd = a3wd / 2;
    printf("Size of A4 paper Hight= %d\nWidth= %d\n", a4ht, a4wd);
    a5ht = a4ht;
    a5wd = a4wd / 2;
    printf("Size of A5 paper Hight= %d\nWidth= %d\n", a5ht, a5wd);
    a6ht = a5ht;
    a6wd = a5wd / 2;
    printf("Size of A6 paper Hight= %d\nWidth= %d\n", a6ht, a6wd);
    a7ht = a6ht;
    a7wd = a6wd / 2;
    printf("Size of A7 paper Hight= %d\nWidth= %d\n", a7ht, a7wd);
    a8ht = a7ht;
    a8wd = a7wd / 2;
    printf("Size of A8 paper Hight= %d\nWidth= %d\n", a8ht, a8wd);
    return 0;
}
