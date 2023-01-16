#include <stdio.h>
#include <stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
};
 
int Circular(struct Node* head)
 {
    struct Node*temp;
    temp = head->next;

// Traversing linked list till last node
    while (temp != NULL && temp != head)
        temp = temp->next;

// Condition for circular linked list
    return (temp == head);
 }

// Adding nodes at end
struct Node* endnode(int data)
{
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    printf("%d-->",temp->data);
    return temp;
}

//Displaylist for circular linked lists
void displaylist(struct Node *head) {
struct Node *temp;
temp = head;
do{
printf("%d --> ", temp->data);
temp = temp->next;
}while (temp!=head);
    printf("%d",head->data);
}

int main()
{
    // Starting with empty list
    // Adding nodes
    struct Node* head = endnode(5);
    head->next = endnode(7);
    head->next->next = endnode(3);
    head->next->next->next = endnode(8);
   
    // Checking for circular list
    if (Circular(head))
        printf("\nYes, circular\n");
    else
        printf("NULL\nNo, not circular\n");
   
    // Making a circular linked list
    head->next->next->next->next = head;
    displaylist(head);
    if (Circular(head))
        printf("\nYes, circular\n");
    else
        printf("NULL\nNo, not circular\n");
    return 0;
}
