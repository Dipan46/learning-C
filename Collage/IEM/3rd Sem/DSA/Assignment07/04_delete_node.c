// STEP 1: IF HEAD = NULL
// WRITE UNDERFLOW
//     GOTO STEP 10
//    END OF IF

// STEP 2: SET TEMP = HEAD
// STEP 3: SET I = 0
// STEP 4: REPEAT STEP 5 TO 8 UNTIL I
// STEP 5: TEMP1 = TEMP
// STEP 6: TEMP = TEMP → NEXT
// STEP 7: IF TEMP = NULL
// WRITE "DESIRED NODE NOT PRESENT"
//     GOTO STEP 12
//     END OF IF

// STEP 8: I = I+1
// END OF LOOP

// STEP 9: TEMP1 → NEXT = TEMP → NEXT
// STEP 10: FREE TEMP
// STEP 11: EXIT

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
void delete_specified()
{
    struct node *ptr, *ptr1;
    int loc, i;
    printf("Enter node to delete: ");
    scanf("%d", &loc);
    ptr = head;
    for (i = 0; i < loc; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if (ptr == NULL)
        {
            printf("\nThere are less than %d elements in the list..\n", loc);
            return;
        }
    }
    ptr1->next = ptr->next;
    free(ptr);
    printf("Deleted %d node ", loc);
}
void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
        printf("Nothing to print");
    else
    {
        printf("printing values: ");
        while (ptr != NULL)
        {
            printf("%d  ", ptr->data);
            ptr = ptr->next;
        }
    }
}
int main()
{
    int choice, item;
    do
    {
        display();
        printf("\n1.Append List\n2.Delete node\n3.Exit\n4.Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the item: ");
            scanf("%d", &item);
            create(item);
            break;
        case 2:
            delete_specified();
            break;
        case 3:
            break;
        default:
            printf("\nPlease enter valid choice\n");
        }
    } while (choice != 3);
    display();
    return 0;
}