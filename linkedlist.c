#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};
 
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
    if(head == NULL){
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

//Checking for common nodes:
void common(struct node* head,struct node* head2){
    struct node *temp1, *temp2;
    temp1=head;
    temp2=head2;
    int flag=0; // flag in case no node value in common
    while (temp1!=NULL)
        {
            while (temp2!=NULL){
                if (temp1->data==temp2->data){
                    printf("Common Value is %d \n",temp2->data);
                    flag++;
                }
                temp2=temp2->next;
            }
            temp1=temp1->next;
            temp2=head2;
        }
        if(flag==0){
            printf("NO INTERSECTION, the linked lists share no values.\n");


        }
}

int main()
{
int a,b,c,d,e,w,x,y,z,p;
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

struct node *head2 = NULL;
printf("\nEnter first element of second linked list: ");
scanf("%d",&a);
head2 = insertatbeg(head2, a);
displaylist(head2);
printf("Enter second element of linked list: ");
scanf("%d",&b);
head2 = insertatend(head2, b);
displaylist(head2);
printf("Enter third element of linked list: ");
scanf("%d",&c);
head2 = insertatend(head2,c);
displaylist(head2);
printf("Enter fourth element of linked list: ");
scanf("%d",&d);
head2 = insertatend(head2, d);
displaylist(head2);
printf("Enter fifth element of linked list: ");
scanf("%d",&e);
head2 = insertatend(head2, e);
displaylist(head2);

common(head,head2);

return 0;
}
