#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *left,*right;
};

struct node *createnode(int);
struct node *insertleft(struct node*,int);
struct node *insertright(struct node*, int);
void inoredertraversel(struct node*);

int main(){
    struct node *root;
    root = createnode(10);
    insertleft(root,20);
    insertright(root,30);
    insertleft((*root).left,40);
    insertleft((*root).right,50);
    insertright((*root).left,60);
    insertright((*root).right,70);
    inoredertraversel(root);
}

struct node *createnode(int data)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    (*newnode).data = data;
    (*newnode).left = NULL;
    (*newnode).right = NULL;
    return newnode;
}

struct node *insertleft(struct node *root, int data)
{
    (*root).left = createnode(data);
    return (*root).left;
}

struct node *insertright(struct node *root, int data)
{
    (*root).right = createnode(data);
    return (*root).right;
}

void inoredertraversel(struct node *root)
{
    if(root == NULL){
        return;
    }
    else{
        inoredertraversel((*root).left);
        printf("%d - ",(*root).data);
        inoredertraversel((*root).right);
    }
}