#include <stdio.h>
#include<stdlib.h>

struct bintrnode {
    int data;
    struct bintrnode *left;
    struct bintrnode *right;
};
    
struct bintrnode *insert(struct bintrnode *root, int d) {
    struct bintrnode *newnode;
    if(root == NULL) {
        newnode = (struct bintrnode *) malloc(sizeof(struct bintrnode));
        newnode->data = d;
        newnode->left = NULL;
        newnode->right = NULL;
        return (newnode);
    }

    else if(d < root->data) {
        root->left = insert(root->left, d);
        return(root);
    }

    else if(d >= root->data) {
        root->right = insert(root->right, d);
        return(root);
    }
}

void display(struct bintrnode *root, int depth) {
    int i;
    if(root != NULL) {
        display(root->right, depth+1);
        for(i = 0; i < depth; i++) printf(" ");
        printf("%d\n", root->data);
        display(root->left, depth+1);
    }
return;
}

int main(){
    int p,q,r,s,t;
    printf("Enter the first number ");
    scanf("%d",&p);

    printf("\nEnter the second number ");
    scanf("%d",&q);

    printf("\nEnter the third number ");
    scanf("%d",&r);

    printf("\nEnter the fourth number ");
    scanf("%d",&s);

    printf("\nEnter the last number ");
    scanf("%d",&t);

    struct bintrnode *root = NULL;
    root = insert(root, p);
    root = insert(root, q);
    root = insert(root, r);
    root = insert(root, s);
    root = insert(root, t);
    display(root, 0);

    return 0;
}
