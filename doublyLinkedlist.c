#include<stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *create(int);
void display(struct node *);
void insert_last(struct node* , int);
int insert_starting(struct node*, int);
int inert_after(struct node*,int , int );
int insert_before(struct node*, int, int);


int main(){

    struct node *p = NULL;
    p = create(10);
    // p = insert_starting(p,50);
    insert_last(p,20);
    inert_after(p,10,40);
    p = insert_starting(p,30);
    p = insert_starting(p,50);
    insert_before(p,10,60);
    inert_after(p,50,80);
    display(p);
}

struct node *create(int data)
{
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    (*new_node).data = data;
    (*new_node).next = NULL;
    (*new_node).prev = NULL;
    return new_node; 
} 

void insert_last(struct node *x, int data)
{
    while ((*x).next != NULL)
    {
        x = (*x).next;
    }
    (*x).next = create(data);
}

void display(struct node *x)
{
    while (x != NULL)
    {
        printf("%d\n",(*x).data);
        x = (*x).next; 
    }   
}

int insert_starting(struct node* x, int data)
{   
    struct node *new_node;
    new_node = create(data);
    if(x == NULL){
        x = new_node;
    }
    
    (*new_node).next = x;
    (*x).prev = new_node;
    (*new_node).prev = NULL;
    x = new_node;

}

int inert_after(struct node* x, int key, int data)
{   
    struct node *new_node;
    while ((*x).data != key)
    {
        x = (*x).next;
    }
    if(x == NULL){
        printf("key not found");      
    }
    new_node = create(data);
    (*new_node).data = data;
    (*new_node).next = (*x).next;
    (*new_node).prev = x;
    if((*x).prev != NULL){
        (*(*x).next).prev = new_node;
    }
    (*x).next = new_node;
}

int insert_before(struct node *x, int key, int data)
{
    struct node *new_node;
    new_node = create(data);
    while ((*(*x).next).data != key)
    {
        x = (*x).next;
    }
    if(x == NULL){
        printf("key not found");
    }
     (*new_node).next = (*x).next;
     (*new_node).prev = x;
     (*x).next = new_node;
}