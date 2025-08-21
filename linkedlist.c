#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *ptr;
};

struct node *create(int);
void display(struct node *);
void insert_last(struct node *,int);
void insert_after(struct node * ,int ,int );
struct node *insert_starting(struct node *,int );
void insert_before(struct node *, int, int );
struct node *sorted_insert(struct node *,int );
void search(struct node *,int );
void delete_last(struct node *);
struct node* delete_first(struct node *);
void delete_after(struct node *,int );
void delete_before(struct node *,int );

int main()
{
   struct node *p = create(10);
   insert_last(p,20);
   insert_last(p,30);
   insert_last(p,40);
   insert_last(p,50);
   insert_last(p,60);
   display(p);
//    p = delete_first(p);
   delete_after(p,30);
   delete_before(p,60);
   display(p);
}

struct node *create(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    (*new_node).data = data;
    (*new_node).ptr = NULL;
    return new_node;
}

void display(struct node *x)
{   
    struct node *p = x;
    while (p != NULL)
    {
        printf("%d ",(*p).data);
        p = (*p).ptr;
    }
    printf("\n");    
}

void insert_last(struct node *x ,int data)
{  
   while ((*x).ptr != NULL)
   {
        x  = (*x).ptr;
   }
   (*x).ptr = create(data); 
}

struct node* insert_starting(struct node *x,int data)
{
    struct node *new_node = create(data);
    (*new_node).ptr = x;
    // new_node = x;
    return new_node;
}

void insert_after(struct node *p, int new, int existing)
{   
    struct node *newnode;    
    while ((*p).data != existing)
    {
       p = (*p).ptr;
    }
    newnode = create(new);
    (*newnode).ptr = (*p).ptr;
    (*p).ptr = newnode;
}

void insert_before(struct node *p, int new, int existing)
{
    struct node *newnode;
    
    newnode = create(new);
    while((*(*p).ptr).data != existing)
    {
        p = (*p).ptr;
    }
    
    (*newnode).ptr = (*p).ptr;
    (*p).ptr = newnode;
}

struct node *sorted_insert(struct node *p,int data)
{   
    struct node *newnode;
    newnode = create(data);
    if(p == NULL)
    {
        return insert_starting(p,data);
    }    
    if((*p).data > data)
    {
        return insert_starting(p,data);
    }
    while ((*p).ptr != NULL && (*(*p).ptr).data > data)
    {
        p = (*p).ptr;
    }
    (*newnode).ptr = (*p).ptr;
    (*p).ptr = newnode;
    return p;    
}

void search(struct node *p,int target)
{
    while ((*p).ptr !=NULL)
    {
        if((*p).data == target)
        {
        printf("%d found",(*p).data);
        }
        p = (*p).ptr;
    }
}

void delete_last(struct node *x) 
{
    while((*(*x).ptr).ptr != NULL)
    {
        x = (*x).ptr;
    }
    (*x).ptr = NULL;

}

struct node *delete_first(struct node *p)
{
    if(p == NULL)
    {
        printf("list empty");
    }
    struct node *temp = p;
    p = (*p).ptr;
    free(temp);
    return p;
    

}

void delete_after(struct node *p,int given)
{
    struct node *deletenode ;
    while((*p).data != given)
    {
        p = (*p).ptr;
    }
    deletenode = (*p).ptr;
    (*p).ptr = (*deletenode).ptr;
    p = (*p).ptr;
    free(deletenode);
}

void delete_before(struct node *p,int given)
{
    struct node *deletenode;
    while((*(*p).ptr).data != given) 
    {
        p = (*p).ptr;
    }
    deletenode = (*p).ptr;
    (*deletenode).ptr = (*p).ptr;
    p = (*p).ptr;
    free(deletenode);

}
