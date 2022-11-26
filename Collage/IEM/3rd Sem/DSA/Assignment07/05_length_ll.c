// Initialize count as 0
// Initialize a node pointer, current = head.
// Do following while current is not NULL
// current = current -> next
// Increment count by 1.
// Return count

// Iterative C program to find length or count of nodes in a
// linked list
#include <stdio.h>
#include <stdlib.h>

/* Link list node */
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
/* Given a reference (pointer to pointer) to the head
of a list and an int, push a new node on the front
of the list. */
void push(struct Node **head_ref, int new_data)
{
    /* allocate node */
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Counts no. of nodes in linked list */
int getCount(struct Node *head)
{
    int count = 0;               // Initialize count
    struct Node *current = head; // Initialize current
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
void display()
{
    struct Node *ptr;
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
/* Driver code*/
int main()
{
    /* Use push() to construct below list
    1->2->1->3->1 */
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    // Function call
    display();
    printf("\ncount of nodes is %d", getCount(head));
    return 0;
}
