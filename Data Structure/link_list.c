#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

struct Node *p, *n, *h, *x;

void create(int a)
{
    p = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value: ");
    scanf("%d", &p->data);

    p->link = NULL;
    h = p;
    for (int i = 0; i < a; i++)
    {
        n = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the value: ");
        scanf("%d", &n->data);
        n->link = NULL;
        p->link = n;
        p = n;
    }
}

void display()
{
    if (h->link == NULL)
        printf("\n------------\nData is: %d", h->data);
    else
    {
        x = h;
        do
        {
            printf("\n------------\nData is: %d", x->data);
            x = x->link;
        } while (x->link != NULL);
    }
}

int main()
{
    int a;
    printf("Enter the number of node: ");
    scanf("%d", &a);

    create(a);
    display();

    return 0;
}
