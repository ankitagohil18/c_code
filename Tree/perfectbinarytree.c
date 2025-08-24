#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node 
{
    int data;
    struct node *left,*right;
};

struct node *create(struct int);
struct node *insertright(struct node*,int);
struct node *insertleft(struct node*,int);
int countdepth(struct node*);

int main(){
 
}

struct node *create(int data)
{
    struct node *newnode ;
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

int countdepth(struct node *root)
{
    if(root == NULL){
        return 0;
    }
    else
}