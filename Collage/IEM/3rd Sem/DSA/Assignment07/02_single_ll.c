// Step 1: IF PTR = NULL Write OVERFLOW
//     Go to Step 1
//    [END OF IF]
// Step 2: SET NEW_NODE = PTR
// Step 3: SET PTR = PTR - > NEXT
// Step 4: SET NEW_NODE - > DATA = VAL
// Step 5: SET NEW_NODE - > NEXT = NULL
// Step 6: SET PTR = HEAD
// Step 7: Repeat Step 8 while PTR - > NEXT != NULL
// Step 8: SET PTR = PTR - > NEXT
// [END OF LOOP]
// Step 9: SET PTR - > NEXT = NEW_NODE
// Step 10: EXIT

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void lastinsert(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    if (ptr == NULL)
        printf("\nOVERFLOW");
    else
    {
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("Node inserted\n");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = ptr;
            ptr->next = NULL;
            printf("Node inserted\n");
        }
    }
}
void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
        printf("Nothing to print");
    else
    {
        printf("printing values . . . . .");
        while (ptr != NULL)
        {
            printf("\n%d", ptr->data);
            ptr = ptr->next;
        }
    }
}
int main()
{
    int choice, item;
    do
    {
        printf("Enter the item which you want to insert?\n");
        scanf("%d", &item);
        lastinsert(item);
        printf("Press 0 to insert more ?\n");
        scanf("%d", &choice);
    } while (choice == 0);
    display();
    return 0;
}
