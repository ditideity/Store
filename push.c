#include <stdio.h>
#define MAX 10
struct stack {
int data[MAX];
int top;
};
void push(struct stack *ptr, int w) {
if(ptr->top == MAX-1) {
printf("Insertion not possible\n");
}
else {
(ptr->top)++;
ptr->data[ptr->top] = w;
}
}

void display(struct stack *ptr) {
int i;
for(i = ptr->top; i >=0; i--) {
printf("%d\n",ptr->data[i]);
}
}
int main()
{
    int x,y,z,a,b;
struct stack s;
s.top = -1;

printf("Enter first value of 5 value stack: ");
scanf("%d",&x);
printf("Enter second value of 5 value stack: ");
scanf("%d",&y);
printf("Enter third value of 5 value stack: ");
scanf("%d",&z);
printf("Enter fourth value of 5 value stack: ");
scanf("%d",&a);
printf("Enter fifth value of 5 value stack: ");
scanf("%d",&b);
push(&s, b);
push(&s, a);
push(&s, z);
push(&s, y);
push(&s, x);
display(&s);

return 0;
}
