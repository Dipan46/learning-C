#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
} *first = NULL;

void create(int a)
{
    struct Node *p, *last;
    p = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value: ");
    scanf("%d", &p->data);

    p->link = NULL;
    first = p;

    for (int i = 0; i < a; i++)
    {
        last = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the value: ");
        scanf("%d", &last->data);
        last->link = NULL;
        p->link = last;
        p = last;
    }
}

void display(struct Node *f)
{
    while (f->link != NULL)
    {
        printf("\n------------\nData is: %d", f->data);
        f = f->link;
    }
}

int main()
{
    int a;
    printf("Enter the number of node: ");
    scanf("%d", &a);

    create(a);
    display(first);

    return 0;
}
