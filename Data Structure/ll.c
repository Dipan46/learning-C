#include <Stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *link;
} *first = NULL;
void create(int a)
{
    struct Node *p, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data: ");
    scanf("%d", first->data);
    first->link = NULL;
    last = first;

    for (int i = 0; i < a; i++)
    {
        p = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data: ");
        scanf("%d", &p->data);
        p->link = NULL;
        last->link = p;
        last = p;
    }
}

void display(struct Node *f)
{
    while (f != NULL)
    {
        printf("%d ", f->data);
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