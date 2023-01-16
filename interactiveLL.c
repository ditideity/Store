#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Structure containing first, second and last name and next pointer
struct node{
    char *first;
    char *second;
    char *last;
    struct node*next;
};

//First linked list entry
struct node* createHead(char*a,char*b,char*c){
    struct node *head;
    head = (struct node *)malloc(sizeof (struct node));
    head->first=a;
    head->second=b;
    head->last=c;
    head->next=NULL;
    return head;
}

//Display List function
void displaylist(struct node *head) {
struct node *temp;
temp = head;
 for(temp = head; temp != NULL; temp = temp->next)
     printf("%s %s %s --> ", temp->first,temp->second,temp->last);
     printf("NULL\n");
     return;
}


//Add new entries
struct node* addentry(struct node* head, char*x,char*y,char*z){
     struct node *temp, *newnode;
     newnode = (struct node *)malloc(sizeof (struct node));
     
     newnode->first=x;
     newnode->second=y;
     newnode->last=z;
    
  for (temp = head; temp->next!=NULL && strcmp(temp->first, x)<0; temp=temp->next);
        newnode->next = temp->next;
        temp->next = newnode;
     return (head);
}

int main(){
    
char x[10],y[10],a[10],b[10],p[10],q[10],z[10],c[10],r[10];

struct node *head = NULL;
 printf("Linked List (Arranged by First Name: ");

 head=createHead("First Name,","Middle Name,","Last Name,");

 displaylist(head);

printf("Add name: ");
scanf("%s %s %s",x,a,p);
head=addentry(head,x,a,p);
displaylist(head);

printf("\nAdd another name: ");
scanf("%s %s %s",y,b,q);
head=addentry(head,y,b,q);
displaylist(head);

printf("\nExit");

return 0;
}
