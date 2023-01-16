#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *next;
};

//Inserting first element of linkedlist:
struct node *insertatbeg(struct node *head, int d) {
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof (struct node));
    newnode->data = d;
    newnode->next = head;
    head = newnode;
    return(head);
}

//Display all elements of list (original and reversed):
void displaylist(struct node *head) {
    struct node *temp;
    for(temp = head; temp != NULL; temp = temp->next) {
        printf("%d --> ", temp->data);
        }
    printf("NULL\n");
}

//Inserting rest of the elements:
struct node *insertatend(struct node *head, int d) {
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof (struct node));
    newnode->data = d;
    newnode->next = NULL;
    if(head == NULL) {
        return(newnode);
        }
    else {
        temp = head;
        while(temp->next != NULL) {
        temp = temp->next;
        }
    temp->next = newnode;
 return(head);
    }
}

//Linked list reverse function
struct node* reverse(struct node *head){
    struct node *temp, *tempo;
    temp = NULL;
    tempo = NULL;
    while (head!=NULL){
        tempo=head->next;
        head->next=temp;
        temp=head;
        head=tempo;
        }
    head=temp;
    return head;
    }

int main()
{
int a,b,c,d,e;
struct node *head = NULL;
printf("Enter first element of linked list: ");
scanf("%d",&a);
head = insertatbeg(head, a);
displaylist(head);
printf("Enter second element of linked list: ");
scanf("%d",&b);
head = insertatend(head, b);
displaylist(head);
printf("Enter third element of linked list: ");
scanf("%d",&c);
head = insertatend(head,c);
displaylist(head);
printf("Enter fourth element of linked list: ");
scanf("%d",&d);
head = insertatend(head, d);
displaylist(head);
printf("Enter fifth element of linked list: ");
scanf("%d",&e);
head = insertatend(head, e);
displaylist(head);
printf("\nReversing list:\n\n");
head=reverse(head);
displaylist(head);
return 0;
}
