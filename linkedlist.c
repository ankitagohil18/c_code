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
struct node  *search(struct node *,int );
void delete_last(struct node *);
void delete_after(struct node *,int );
void delete_before(struct node *,int );
struct node *delete(struct node *,int);

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
//    delete_after(p,30);
//    delete_before(p,60);
   p = delete(p,10);
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
    struct node *new_node_ptr = create(new);
    struct node *existing_node_ptr = search(p, existing);
    (*new_node_ptr).ptr = (*existing_node_ptr).ptr;
    (*existing_node_ptr).ptr = new_node_ptr;
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

struct node *search(struct node *p,int target)
{
    if (p == NULL)
    {
        return NULL;
    }
    while ((*p).ptr !=NULL)
    {
        if((*p).data == target)
        {
            return p;
        }
        p = (*p).ptr;
    }
    return NULL;
}

void delete_last(struct node *x) 
{
    while((*(*x).ptr).ptr != NULL)
    {
        x = (*x).ptr;
    }
    free(x);
    (*x).ptr = NULL;
}

void delete_after(struct node *p,int given)
{
    struct node *deletenode;
    p = search(p, given);
    deletenode = (*p).ptr;
    (*p).ptr = (*deletenode).ptr;
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

struct node  *delete(struct node *p,int target)
{   
    struct node *temp;
    temp = p;
    if((*temp).ptr!=NULL && (*temp).data == target)
    {
        p = (*temp).ptr;
        free(temp);
        return NULL;
    }

   while (temp !=NULL && (*(*temp).ptr).data != target)
   {
        temp = (*temp).ptr;
   }
   if((*temp).ptr == NULL) 
   {
    return NULL;
   }
   struct node *delete_node_ptr ;
   delete_node_ptr = (*temp).ptr;
   (*temp).ptr = (*delete_node_ptr).ptr;
   free(delete_node_ptr);
   return temp;
    
}