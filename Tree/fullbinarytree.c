#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node 
{
    int data;
    struct node *left,*right;
};

struct node *create(int);
struct node *insertright(struct node*,int);
struct node *insertleft(struct node*,int);
bool isfullbinarytree(struct node*);

int main(){
    struct node *root;
    root = create(10);
    insertleft(root,20);
    insertright(root,30);
    insertleft((*root).left,40);
    insertleft((*root).right,50);
    insertright((*root).left,60);
    insertright((*root).right,70);
    if(isfullbinarytree(root)){
        printf("given tree is full binary tree");
    }
    else{
        printf("given tree is not full binary tree");
    }
}

struct node *create(int data)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    (*newnode).data = data;
    (*newnode).left = NULL;
    (*newnode).right = NULL;
    return newnode;
}

struct node *insertright(struct node *root, int data)
{
    struct node *newnode = create(data);
    (*root).right = newnode ;
    return newnode;
}

struct node *insertleft(struct node *root, int data)
{
    struct node *newnode = create(data);
    (*root).left = newnode;
    return newnode;
}

bool isfullbinarytree(struct node *root)
{
    if(root == NULL){
        return true;
    }
    else if((*root).left == NULL && (*root).right == NULL){
        return true;
    }
    else if(((*root).left) && ((*root).right)){
        return (isfullbinarytree((*root).left) && isfullbinarytree((*root).right));
    }
    else{
        return false;
    }
}
