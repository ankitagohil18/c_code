#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *create(int);
int display(struct node *);
void insert_last(struct node *, int);
// void insert_aftre(struct node* , int);
struct node *insert_starting(struct node *, int);


int main(){
    struct node *q = create(10);
    insert_last(q,30);
    struct node *p = insert_starting(*q,20);
    display(q);
    // insert_aftre(q,10,20);
    // display(q);
}

struct node *create(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    (*new_node).data = data;
    (*new_node).next = NULL;
    (*new_node).prev = NULL;
    return new_node;
}

int display(struct node *x)
{   
    struct node *p = x;
    while (p != NULL )
    {
        printf("%d\n",(*p).data);
        p = (*p).next;
    }
    
}

void insert_last(struct node *x, int data)
{   
    while ((*x).next != NULL)
    {
        x = (*x).next;
    }
    
    (*x).next = create(data);
    // (*x).next = NULL;
    // return x;
}

// void insert_aftre(struct node *x , int target , int data)
// {
//     while((*x).data != target)
//     {
//         x = (*x).next;
//     }
//     (*x).next = create(data);
// }

struct node *insert_starting(struct node *p, int data)
{
    struct node *new_node = create(data);
    (*new_node).next = p;
    return new_node;
}