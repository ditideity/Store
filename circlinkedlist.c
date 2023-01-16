#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
};

//Creating Initial Node to set up a circular linked list
struct node* createHead(int p){
    struct node *head;
    head = (struct node *)malloc(sizeof (struct node));
    head->data=p;
    head->next=head;
    return head;
}



//Add new entry to the start
struct node *addstart(struct node *head, int d) {
    struct node *temp;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof (struct node));
    newnode->data = d;
    newnode->next = head;
    
     for(temp = head; temp->next!= head; temp = temp->next);
         temp->next=newnode;
         return(newnode);
}

//Display List function
void displaylist(struct node *head) {
struct node *temp;
temp = head;
do{
printf("%d --> ", temp->data);
temp = temp->next;
}while (temp!=head);
    printf("%d\n",head->data);
}

//Add new entry to the end
struct node *addend(struct node *head, int d) {
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof (struct node));
    newnode->data = d;
    newnode->next = head;
    
        temp = head;
        while(temp->next != head) {
            temp = temp->next;
            }
        temp->next = newnode;
        return(head);
        
}

//Add new value after another one
struct node *insertafter(struct node *head, int after, int d) {
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof (struct node));
    newnode->data = d;
    for(temp = head; temp->next!=head && temp->data != after; temp =
        temp->next);
        newnode->next = temp->next;
        temp->next = newnode;
        return(head);
    }
    
//Delete first value
struct node *delstart(struct node *head) {
    struct node *temp;
    for(temp = head; temp->next!= head; temp = temp->next);
    temp->next=head->next;
    free(head);
    head=temp->next;
    return(head);
}

//Delete last value
struct node *delend(struct node *head){
        struct node *temp,*tempo;
        temp = head;  
        while(temp ->next->next != head)  
        {
        }  
        free(temp->next); 
        temp->next = head;  
        return(head); 
    }


//Main function where all functions run sequentially by taking input from the user
int main()
{
 int a,b,c,e,f;
 
struct node *head = NULL;
printf("Initial Circular Linked List Value: ");
head=createHead(4);
displaylist(head);

printf("Insert a new value at beginning: ");
scanf("%d",&a);
head = addstart(head, a);
displaylist(head);

printf("Insert a new value at end: ");
scanf("%d",&b);
head = addend(head, b);
displaylist(head);

printf("Insert a new value at end: ");
scanf("%d",&c);
head = addend(head, c);
displaylist(head);

printf("Insert the value after which you want to enter:\n Enter new value to enter: ");
scanf("%d%d",&e,&f);
head = insertafter(head, e, f);
displaylist(head);

printf("Removing a value from the beginning: ");
head = delstart(head);
displaylist(head);
printf("Hi");
printf("Removing a value from the end: ");
head=delend(head);
displaylist(head);

return 0;
}
