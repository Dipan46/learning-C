// Step 1: SET PTR = HEAD
// Step 2: Set I = 0
// STEP 3: IF PTR = NULL
//   WRITE "EMPTY LIST"
//   GOTO STEP 8
//   END OF IF

// STEP 4: REPEAT STEP 5 TO 7 UNTIL PTR != NULL
// STEP 5: if ptr → data = item
//   write i+1
//  End of IF

// STEP 6: I = I + 1
// STEP 7: PTR = PTR → NEXT
// [END OF LOOP]

// STEP 8: EXIT

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
void search()
{
    struct node *ptr;
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
        printf("\nEmpty List\n");
    else
    {
        printf("Enter item which you want to search: ");
        scanf("%d", &item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("item found at location %d ", i + 1);
                flag = 0;
            }
            else
                flag = 1;
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
            printf("Item not found\n");
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
    int choice, item, loc;
    do
    {
        printf("1.Create\n2.Search\n3.Exit\n4.Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the item: ");
            scanf("%d", &item);
            create(item);
            break;
        case 2:
            search();
        case 3:
            exit(0);
            break;
        default:
            printf("\nPlease enter valid choice\a\n");
        }

    } while (choice != 3);
    return 0;
}
