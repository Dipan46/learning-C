// STEP 1: IF PTR = NULL
// WRITE OVERFLOW
//     GOTO STEP 12
//    END OF IF

// STEP 2: SET NEW_NODE = PTR
// STEP 3: NEW_NODE → DATA = VAL
// STEP 4: SET TEMP = HEAD
// STEP 5: SET I = 0
// STEP 6: REPEAT STEP 5 AND 6 UNTIL I
// STEP 7: TEMP = TEMP → NEXT
// STEP 8: IF TEMP = NULL
// WRITE "DESIRED NODE NOT PRESENT"
//      GOTO STEP 12
//     END OF IF
//  END OF LOOP

// STEP 9: PTR → NEXT = TEMP → NEXT
// STEP 10: TEMP → NEXT = PTR
// STEP 11: SET PTR = NEW_NODE
// STEP 12: EXIT

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void create(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
        printf("\nOVERFLOW\n");
    else
    {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("Node inserted");
    }
}
void randominsert(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    int i, loc;
    if (ptr == NULL)
        printf("\nOVERFLOW");
    else
    {
        printf("Enter the location: ");
        scanf("%d", &loc);
        ptr->data = item;
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("Node inserted");
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
    int choice, item, loc;
    do
    {
        printf("Enter the item which you want to insert: ");
        scanf("%d", &item);
        if (head == NULL)
            create(item);
        else
            randominsert(item);
        printf("\nPress 0 to insert more: ");
        scanf("%d", &choice);
    } while (choice == 0);
    display();
    return 0;
}